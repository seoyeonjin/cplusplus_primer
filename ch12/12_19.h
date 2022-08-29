#pragma once
// weak_ptr은 shared_ptr을 관리하기 위한 reference count에 포함되지 않음.
// shared_ptr 객체 하나가 소멸되더라도, 동일한 메모리 주소를 참조하고 있는 다른 shared_ptr 객체가 있으면 참조하고 있던 메모리 주소의 객체는 소멸되지 않음.

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

class StrBlobPtr;

class StrBlob {
public:
    using size_type = vector<string>::size_type;
    friend class StrBlobPtr;

    StrBlobPtr begin();
    StrBlobPtr end();

    StrBlob() : data(std::make_shared<vector<string>>()) {}
    StrBlob(std::initializer_list<string> il)
        : data(std::make_shared<vector<string>>(il))
    {
    }

    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    void push_back(const string& t) { data->push_back(t); }
    void pop_back()
    {
        check(0, "pop_back on empty StrBlob");
        data->pop_back();
    }

    std::string& front()
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }

    std::string& back()
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

    const std::string& front() const
    {
        check(0, "front on empty StrBlob");
        return data->front();
    }
    const std::string& back() const
    {
        check(0, "back on empty StrBlob");
        return data->back();
    }

private:
    void check(size_type i, const string& msg) const
    {
        if (i >= data->size()) throw std::out_of_range(msg);
    }

private:
    std::shared_ptr<vector<string>> data;
};


class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {};
    StrBlobPtr(StrBlob& a, size_t sz = 0) :wptr(a.data), curr(sz) {};
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; }
    string& deref() const;
    StrBlobPtr& incr();
private:
    std::shared_ptr<vector<string>> check(std::size_t, const string&) const;
    std::weak_ptr<vector<string>> wptr;
    std::size_t curr;
};

string& StrBlobPtr::deref() const {
    auto p = check(curr, "dereference past end");
    return (*p)[curr];
}

StrBlobPtr& StrBlobPtr::incr() {
    check(curr, "increment past end of StrBlobPtr");
    ++curr;
    return *this;
}

std::shared_ptr<vector<string>>
StrBlobPtr::check(std::size_t i, const string& msg) const {
    auto ret = wptr.lock();
    if (!ret)
        throw std::runtime_error("unbound StrBlobPtr");
    if (i >= ret->size())
        throw std::out_of_range(msg);
    return ret;
}

StrBlobPtr StrBlob::begin() {
    return StrBlobPtr(*this);
}

StrBlobPtr StrBlob::end() {
    return StrBlobPtr(*this, data->size());
}
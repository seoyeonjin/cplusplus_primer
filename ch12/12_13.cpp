// 런타임 에러

#include <iostream>
#include <memory>

int main()
{
    {
        auto sp = std::make_shared<int>();
        auto p = sp.get();
        delete p;
    }

    return 0;
}
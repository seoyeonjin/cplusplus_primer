#include <iostream>
#include <stack>
#include <string>

using std::string; 
using std::cout; 
using std::endl; 
using std::stack;

int main()
{
    string str("hello (world).");
    stack<char> st;

    bool flag = false;
    for (char elem : str) {
        if (elem == '(') {
            flag = true;
            continue;
        }
        else if (elem == ')') {
            flag = false;
        }

        if (flag)
            st.push(elem);
    }

    string restr;
    while (!st.empty()) {
        restr += st.top();
        st.pop(); 
    }

    cout << restr << endl;
    str.replace(str.find('(' ) + 1, restr.size(), restr);

    cout << str << endl;
    return 0;
}
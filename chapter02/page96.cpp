#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 2018-07-03 22:48:15
int main(int argc, char const *argv[])
{
    string str("some string");
    // begin()=end()说明为空
    if (str.begin() != str.end()) {
        auto it = str.begin(); // it 指向s的第一个字符
        cout << *it << endl; // s
        *it = toupper(*it); // 将当前字符改为大写
    }
    cout << str << endl;
    
    return 0;
}

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// 范围for(range for)
// 2018-07-03 21:17:59
int main(int argc, char const *argv[])
{
    string str("some string");
    //for(auto c : str) {
    for(auto &c : str) { // &c可以最终改变str => SOME STRING
        c = toupper(c);
        cout << c << endl;
    }
    cout << str << endl;
    
    return 0;
}

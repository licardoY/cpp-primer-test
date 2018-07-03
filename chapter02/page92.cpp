#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;


int main(int argc, char const *argv[])
{
    vector<int> ve = {1,2,3,4,5,6,7,8,9};
    
    for(auto &i : ve) {
        i *= i; // 引用i,最终可以改变ve里元素的值
    }
    
    
    for(auto &i : ve) {
        cout << i << endl;
    }
    
    return 0;
}

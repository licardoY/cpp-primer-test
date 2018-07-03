#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(int argc, char const *argv[])
{
    string line;
    // 每次读一整行,直到到达文件末尾
    // getline函数返回的那个换行符实际上被丢弃了,得到的string对象中实际上并不包含换行符
    while(getline(cin,line)){
        
        if (!line.empty()) {
            cout << line << endl;
        }else{
            cout << "empty!" << endl;
        }
    }
    

    return 0;
}

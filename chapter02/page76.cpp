#include <iostream>
#include <string>
using std::string;

// 2018-07-03 01:15:04
// 标准库String
int main(int argc, char const *argv[])
{
    /**
     * 如果使用等号(=)初始化一个变量就是拷贝初始化,编译器把等号右边的初始值拷贝到左边新的变量里
     * 如果不使用等号(=),则是直接初始化
     */

    string s1; // 默认初始化,s1是一个空字符串
    string s2 = s1; // s2 是 s1 的副本
    string s3(s1);// 等价于string s3 = s1;

    string s4 = "你好"; // s4是字符串字面值的副本
    string s5("你好");// 和上面等价
    string s6(5,'A');// "AAAAA"
    return 0;
}

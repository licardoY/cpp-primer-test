#include <iostream>

//2018-07-02 21:32:53

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    return 0;
    
}

/**
 * 使用gcc会报如下错误,使用g++就可以了
 * 
/usr/lib/gcc/x86_64-linux-gnu/7/../../../x86_64-linux-gnu/Scrt1.o：在函数‘_start’中：
(.text+0x20)：对‘main’未定义的引用
/tmp/cc74bW04.o：在函数‘mian()’中：
page5.cpp:(.text+0x12)：对‘std::cout’未定义的引用
page5.cpp:(.text+0x17)：对‘std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)’未定义的引用
page5.cpp:(.text+0x21)：对‘std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)’未定义的引用
page5.cpp:(.text+0x2c)：对‘std::ostream::operator<<(std::ostream& (*)(std::ostream&))’未定义的引用
page5.cpp:(.text+0x48)：对‘std::cin’未定义的引用
page5.cpp:(.text+0x4d)：对‘std::istream::operator>>(int&)’未定义的引用
page5.cpp:(.text+0x5f)：对‘std::istream::operator>>(int&)’未定义的引用
page5.cpp:(.text+0x6d)：对‘std::cout’未定义的引用
page5.cpp:(.text+0x72)：对‘std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)’未定义的引用
page5.cpp:(.text+0x82)：对‘std::ostream::operator<<(int)’未定义的引用
page5.cpp:(.text+0x91)：对‘std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)’未定义的引用
page5.cpp:(.text+0xa1)：对‘std::ostream::operator<<(int)’未定义的引用
page5.cpp:(.text+0xb0)：对‘std::basic_ostream<char, std::char_traits<char> >& std::operator<< <std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&, char const*)’未定义的引用
page5.cpp:(.text+0xc5)：对‘std::ostream::operator<<(int)’未定义的引用
page5.cpp:(.text+0xcf)：对‘std::basic_ostream<char, std::char_traits<char> >& std::endl<char, std::char_traits<char> >(std::basic_ostream<char, std::char_traits<char> >&)’未定义的引用
page5.cpp:(.text+0xda)：对‘std::ostream::operator<<(std::ostream& (*)(std::ostream&))’未定义的引用
/tmp/cc74bW04.o：在函数‘__static_initialization_and_destruction_0(int, int)’中：
page5.cpp:(.text+0x10a)：对‘std::ios_base::Init::Init()’未定义的引用
page5.cpp:(.text+0x11f)：对‘std::ios_base::Init::~Init()’未定义的引用
collect2: error: ld returned 1 exit status
*/
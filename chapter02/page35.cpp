#include <iostream>

// 2018-07-02 22:57:17
// 注意无符号范围
int main(int argc, char const *argv[])
{
    unsigned u = 10,u2 = 42;
    std::cout << u2 - u << std::endl; // 32
    std::cout << u - u2 << std::endl; // 4294967264

    int i = 10,i2 = 42;
    std::cout << i2 - i << std::endl; // 32
    std::cout << i - i2 << std::endl; // -32

    std::cout << i - i2 << std::endl; // -32
    std::cout << u - i << std::endl; // 0

    return 0;
}

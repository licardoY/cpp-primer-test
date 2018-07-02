#include <iostream>

// 2018-07-02 22:08:49
int main()
{
    int sum = 0;
    int value = 0;
    // 读取数据直到遇到文件末尾,计算所有输入的值的和
    // 遇到文件末尾:ESC , 字母等
    while (std::cin >> value)
        sum += value;
    std::cout << "Sum is: " << sum << std::endl;
    return 0;

}
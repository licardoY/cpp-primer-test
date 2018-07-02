#include <iostream>
// 2018-07-02 21:47:43
int main()
{
    int sum = 0;
    int val = 1;
    while(val <= 10) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of 1~10 inclusive is "
              << sum << std::endl;
    return 0;
}
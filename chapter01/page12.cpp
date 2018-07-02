#include <iostream>

//2018-07-02 21:58:41
int main()
{
    int sum = 0;
    for (int val = 1; val <= 10; ++val)
        sum += val;
    std::cout << "Sum of 1~10 inclusive is "
              << sum << std::endl;
    return 0;
    
}
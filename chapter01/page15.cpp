#include <iostream>

// 2018-07-02 22:27:49
// 输入数字需要相同的连续输入?
int main()
{
    int currVal = 0;
    int val = 0;
    if (std::cin >> currVal) {
        int cnt =1;
        while (std::cin >> val) {
            if (val == currVal) {
                ++cnt;
            }else{
                std::cout << currVal << " occurs " << cnt << " tims" << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " tims" << std::endl;
    }
    return 0;
}
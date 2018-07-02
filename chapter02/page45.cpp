#include <iostream>

int ii = 42;
int main(int argc, char const *argv[])
{
    int ii = 100;
    int j = ii;
    std::cout << j << std::endl; // 100

    // =======================
    int i = 100;
    int sum = 0 ;
    for (int i = 0; i != 10; ++i) {
        sum += i;
    }
    std::cout << i << " " << sum << std::endl; //i = 100, sum = 45
    return 0;


}

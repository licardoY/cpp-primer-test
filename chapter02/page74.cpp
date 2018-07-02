#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// 2018-07-03 01:01:56
// 每个名字都需要独立的using声明
int main(int argc, char const *argv[])
{
    cout << " Enter two numbers: " << endl;
    int v1;
    int v2;
    cin >> v1 >> v2;
    cout << "The sum of " << v1 << " + " << v2 << " = " << v1 + v2 << endl;
    return 0;
}

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int main(int argc, char const *argv[])
{
    const string hexdigits = "0123456789ABCDEF";
    cout << " enter a series of numbers between 0~15"
        << " separated by spaces.Hit ENTER when finished: "
        << endl;
    string result;
    string::size_type n;
    
    while(cin >> n){
        if (n < hexdigits.size()) {
            result += hexdigits[n];
            cout << result <<endl;
        }
    }
    cout << "Your hex number is: " << result << endl;
    
    return 0;
}

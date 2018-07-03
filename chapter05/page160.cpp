#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

// 2018-07-04 00:21:40
//Ctrl+d EOF
int main(int argc, char const *argv[])
{
    unsigned aCnt = 0,eCnt = 0,iCnt = 0, oCnt = 0,uCnt = 0;
    char ch;
    while(cin >> ch) {
        switch (ch)
        {
            case 'a':
                ++aCnt;
                break;
            case 'e':
                ++eCnt;
                break;
            case 'i':
                ++iCnt;
                break;
            case 'o':
                oCnt++;
                break;
            case 'u':
                uCnt++;
                break;
            // default:
                // break;
        }
    }

    cout << "Number of vowel a:\t" << aCnt <<endl;
    cout << "Number of vowel e:\t" << eCnt <<endl;
    cout << "Number of vowel i:\t" << iCnt <<endl;
    cout << "Number of vowel o:\t" << oCnt <<endl;
    cout << "Number of vowel u:\t" << uCnt <<endl;
    return 0;
}

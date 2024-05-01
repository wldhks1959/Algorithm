#include <iostream>
#include <math.h>
using namespace std;

int main() 
{

    string str; cin >> str;

    while (str.length() % 3 != 0) str = '0' + str; // 세 자리로 맞춤 
    
    for (int i = 0; i < str.length(); i += 3) 
    {
        int num = (str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0') * 1;
        cout << num;
    }

    return 0;
}

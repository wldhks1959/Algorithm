#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str; cin >> str;
    string arr[8] = { "000", "001", "010", "011", "100", "101", "110", "111" };
    int tmp;

    for (int i = 0; i < str.length(); i++ )
    {
        tmp = str[i] - '0';
        if (i == 0) cout << stoi(arr[tmp]);
        else cout << arr[tmp];

    }
    return 0;
}
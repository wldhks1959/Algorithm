#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str, f_str; 
    getline(cin, str); getline(cin, f_str);
    int cnt = 0;
    int f = str.find(f_str);
    while (f != string::npos)
    {
        cnt++;
        f = str.find(f_str, f + f_str.size());
    }
    cout << cnt << "\n";
    return 0;
}
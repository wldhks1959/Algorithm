#include <iostream>
#include <string>
using namespace std;
typedef long long ll;
int main(void) 
{
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) 
    {
        // 대문자일 경우 
        if (s[i]>='A' && s[i]<='Z') 
            cout << char(s[i] + 32);
        
        // 소문자일 경우
        else if(s[i] >='a' && s[i]<='z')
            cout << char(s[i] - 32);
    }
    return 0;
}
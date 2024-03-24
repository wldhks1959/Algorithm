#include<iostream>
using namespace std;

int n;

int main() 
{
    int cnt = 99;
    cin >> n; // 123
    if (n < 100) cnt = n;
    
    for (int i = 100; i <= n; i++) 
    {
        int n1 = i / 100; // 1
        int n2 = i / 10 % 10; // 2
        int n3 = i % 10; // 3
        if (n1 + n3 == n2 * 2) cnt++;
    }
    cout << cnt;
    return 0;
}
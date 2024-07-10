#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    
    for(int i = 1; i * i <= n; ++i)
        cnt++;
    cout << cnt;
    return 0;
}
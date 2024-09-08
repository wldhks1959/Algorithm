#include <iostream>
using namespace std;

int main()
{
    int cnt = 1;
    while (1) 
    {
        int l, p, v;
        cin >> l >> p >> v;

        if (l==0 && p==0 && v==0) break;
        int use = v / p;
        int remain = v % p;
        if (l < remain) remain = l;

        int result = l * use + remain;

        cout << "Case "<< cnt << ": " << result << "\n";
        cnt++;
    }
    return 0;
}
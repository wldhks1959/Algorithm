#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int y = 0, m = 0;
    int n; cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++) cin >> v[i];
    
    for (int i : v) 
    {
        i++;
        y += (i / 30) * 10; // 영식 
        y += i % 30 > 0 ? 10 : 0;
        m += (i / 60) * 15; // 민식 
        m += i % 60 > 0 ? 15 : 0;
    }

    if (y == m) cout << "Y M " << y;
    else if (y > m) cout << "M " << m;
    else cout << "Y " << y;
    return 0;
}
#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    int h, m, s, sec, q, t, c;
    cin >> h >> m >> s >> q;
    sec = h * 3600 + m * 60 + s;
    while (q--) 
    {
        cin >> t;
        if (t == 1) 
        {
            cin >> c;
            sec = (sec + c) % 86400;
        }
        else if (t == 2) 
        {
            cin >> c;
            sec = (sec - c) % 86400;
            if (sec < 0) sec += 24 * 3600;
        }
        else 
        {
            h = sec / 3600;
            m = sec / 60 % 60;
            cout << h << " " << m << " " << sec % 60 << "\n";
        }
    }
    return 0;
}
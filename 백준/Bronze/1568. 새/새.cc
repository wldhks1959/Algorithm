// 1568
#include <iostream>
using namespace std;

int main()
{
    int i = 1, n, c = 0;

    cin >> n;

    while(1)
    {
        if (n < i) i = 1;

        n -= i++;
        c++;

        if (n <= 0)
        {
            cout << c << "\n";
            return 0;
        }
    }    
}
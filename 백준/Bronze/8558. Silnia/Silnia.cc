#include <iostream>
using namespace std;

int main(void)
{
    int n; cin >> n;
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
        result %= 10;
    }
    cout << result << "\n";
    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    string result = "";
    long long cnt = 0;

    while (n > 0) {
        result += to_string((n % 2));
        n /= 2;
    }
    reverse(result.begin(), result.end());

    cout << result;
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n; double res;
    cin >> n;
    res = pow(0.5,n);
    printf("%.*f", n, res); // 여기서 n은 출력하고 싶은 자리수를 의미
    return 0;
}
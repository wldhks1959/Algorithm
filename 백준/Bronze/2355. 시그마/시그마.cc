#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	long long  a, b;
	cin >> a >> b;

	if (a > b)
		swap(a, b);
	
	long long res = (a + b) * (b - a + 1) / 2;
	cout << res;

	return 0;
}
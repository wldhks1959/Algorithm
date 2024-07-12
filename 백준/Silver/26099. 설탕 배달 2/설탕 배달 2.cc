#include <iostream>
using namespace std;
typedef long long ll;

ll n, res;

int main() 
{
	ios::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	while (n % 5)
	{
		n -= 3;
		res++;
	}

	if (n < 0) cout << -1;
	else cout << res + n / 5;
	return 0;
}
#include <iostream>
using namespace std;

int main(void)
{
	long long n, m; cin >> n >> m;
	
	if (n > m) cout << 0;
	else {
		if (n == 1) cout << 1;
		else
		{
			long long fact=1;
			for (long long i = 2; i <= n ; i++) fact = (fact*i) % m;
			cout << fact;
		}
	}
	return 0;
}
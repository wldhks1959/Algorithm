#include <iostream>
using namespace std;
// 275, 5 -> 200 5 
// 1021, 11 -> 1001 11 
// 100 <= n <= 2000000000

int main(void)
{
	int n, f; cin >> n >> f;
	int ans = 0;
	
	n /= 100;
	n *= 100;

	while (1)
	{
		if ((n + ans) % f != 0 && ans < 100) ans++;
		else break;
	}

	if (ans < 10) cout << "0" << ans;
	else cout << ans;
	return 0;
 }
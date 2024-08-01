#include <iostream>
using namespace std;
// if ( x < 10 ) -> x0 -> y = 0+x -> (y%10)*10 x%10 
int main(void)
{
	int n, tmp; cin >> n;

	if (n < 10) n *= 10;

	int cnt = 0;
	tmp = n;

	while (1)
	{
		cnt++;
		tmp = tmp % 10 * 10 + (tmp / 10 + tmp % 10) % 10;
		if (tmp == n) break;
	}
	cout << cnt;
	return 0;
}

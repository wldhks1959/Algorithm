#include <iostream>
using namespace std;

int coin[6] = { 500, 100, 50, 10, 5, 1 };
int main(void)
{
	// 500 100 50 10 5 1
	// 1000 냈을 때, 1000 - n 
	int n; cin >> n;
	n = 1000 - n;
	int i = 0, cnt=0;
	while (n > 0)
	{
		cnt += n / coin[i];
		n = n % coin[i];
		i++;
	}
	cout << cnt;
	return 0;
}
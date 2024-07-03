#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, cnt=0;
	cin >> a >> b >> c;
	while (a < b)
	{
		a = a + c;
		cnt++;
	}
	cout << cnt;
	return 0;
}
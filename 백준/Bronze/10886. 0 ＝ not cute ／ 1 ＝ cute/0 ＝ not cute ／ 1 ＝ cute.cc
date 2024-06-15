#include <iostream>
using namespace std;

int n, value;
int cnt0 = 0, cnt1 = 0;

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		if (value == 0) cnt0++;
		else if (value == 1) cnt1++;
	}
	if (cnt0 > cnt1) cout << "Junhee is not cute!";
	if (cnt1 > cnt0) cout << "Junhee is cute!";

	return 0;
}
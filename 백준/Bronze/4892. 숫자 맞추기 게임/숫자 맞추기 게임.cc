#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	int idx = 1;
	while (1)
	{
		int n;
		cin >> n;
		if (n == 0) break;

		int n1, n2, n3, n4;

		n1 = 3 * n;
		bool odd = false;
		if (n1 % 2 == 1) odd = true;

		if (odd == false) n2 = n1 / 2;
		else n2 = (n1 + 1) / 2;

		n3 = 3 * n2;
		n4 = n3 / 9;

		if (odd == false) n = 2 * n4;
		else n = 2 * n4 + 1;

		string ans = odd ? "odd" : "even";
		cout << idx << ". " << ans << " " << n4 << "\n";
		idx++;
	}
	return 0;
}
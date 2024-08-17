#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int n, l;
	cin >> n >> l;
	vector<int> h(n);
	int ans = l;

	for (int i = 0; i < n; i++)
	{
		cin >> h[i];
	}

	sort(h.begin(), h.end());

	for (auto a : h)
	{
		if (a <= ans) ans++;
	}

	cout << ans;
	return 0;
}
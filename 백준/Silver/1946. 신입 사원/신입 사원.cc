#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, n;

int main(void)
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<pair<int, int>> v;
		for (int i = 0; i < n; i++)
		{
			int x, y; cin >> x >> y;
			v.push_back({ x,y });
		}
		sort(v.begin(), v.end());

		int tmp = 0, res = 1;

		for (int i = 1; i < n; i++)
		{
			if (v[tmp].second > v[i].second)
			{
				res++;
				tmp = i;
			}
		}
		cout << res << "\n";
	}
	return 0;
}
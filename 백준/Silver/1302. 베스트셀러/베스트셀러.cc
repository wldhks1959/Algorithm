#include <iostream>
#include <map>
using namespace std;

int main()
{
	int n, cnt=0; cin >> n;
	map<string, int> m;
	while (n--)
	{
		string str;
		cin >> str;
		m[str]++;
	}
	for (auto a : m) cnt = max(cnt, a.second);
	for (auto a : m)
	{
		if (a.second == cnt)
		{
			cout << a.first;
			return 0;
		}
	}
}
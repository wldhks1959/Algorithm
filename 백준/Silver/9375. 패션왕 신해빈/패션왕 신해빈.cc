#include <iostream>
#include <map>
#include <cstring>
#include <string>
using namespace std;

int t, n, ans; 
string s1, s2;

int main(void)
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		map<string,int> m;
		ans = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> s1 >> s2;

			if (m.find(s2) == m.end()) m[s2] = 1;
			else m[s2]++;
		}
		for (auto a : m)
			ans *= (a.second + 1);

		cout << ans - 1<<"\n";
	}
	return 0;
}
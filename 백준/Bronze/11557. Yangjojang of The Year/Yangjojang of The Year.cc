#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(const pair<string, int> a, const pair<string, int> b)
{
	return a.second >  b.second;
}

int main(void)
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;

		pair<string, int> p[100];

		for(int i=0;i<n;i++) cin >> p[i].first >> p[i].second;
		
		sort(p, p + n, comp);

		cout << p[0].first<<"\n";
	}
	return 0;
}
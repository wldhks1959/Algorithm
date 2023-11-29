#include <iostream>
#define MAX 52
using namespace std;

pair<int, int> p[MAX];

int main() 
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
	int n; cin >> n;
	int res=1;
	for (int i = 0; i < n; i++)
		cin >> p[i].first >> p[i].second;
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (p[i].first < p[j].first && p[i].second < p[j].second) res++;
		}
		cout << res << " ";
		res = 1;
	}
	return 0;
}
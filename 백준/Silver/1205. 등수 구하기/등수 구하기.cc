#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// var
int n, score, p;

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> score >> p;
	vector<int> v(n);
	for (int i = 0; i < n; i++) 
		cin >> v[i];
	
	// solve
	if (n == p && v[v.size() - 1] >= score) 
			cout << -1 << "\n";
	else 
	{
		int rank = 1;
		for (int i = 0; i < n; i++) 
		{
			if (v[i] > score) rank++;
			else break;
		}
		// result
		cout << rank << "\n";
	}
	return 0;
}
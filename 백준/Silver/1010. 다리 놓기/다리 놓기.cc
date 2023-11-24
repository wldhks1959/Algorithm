#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int t; cin >> t;

	for (int i = 0; i < t; i++)
	{
		long long result = 1;
		int n = 0; int m = 0;

		cin >> n >> m;

		int r = 1;
		for (int j = m; j > m - n; j--)
		{
			result = result * j;
			result = result/r;
			r++;
		}	
		cout << result << "\n";
	}
	return 0;
}
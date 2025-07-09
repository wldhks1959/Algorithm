#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		int answer = 0;
		cin >> n;
		vector<bool> open(n + 1, false); // false = 닫힘, true = 열림

		for (int k = 1; k <= n; k++) 
		{
			for (int room = k; room <= n; room += k) 
			{
				open[room] = !open[room];
			}
		}

		for (int i = 1; i <= n; i++)
			if (open[i] == true) answer++;
		printf("%d\n",answer);
	}
	return 0;
}
#include <iostream>>
using namespace std;
#define MAX 502
int dp[MAX][MAX] = { 0, };

int main() 
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++) 
		for (int j = 1; j <= i; j++)  
			cin >> dp[i][j];
	
	int maxNum = dp[1][1];

	for (int i = 2; i <= n; i++) 
	{
		for (int j = 1; j <= i + 1; j++) 
		{
			if (j == 1) 
				dp[i][j] += dp[i - 1][j];
			else if (j == i) 
				dp[i][j] += dp[i - 1][j - 1];
			else 
				dp[i][j] += max(dp[i - 1][j - 1], dp[i - 1][j]);
			maxNum = max(maxNum, dp[i][j]);
		}
	}

	cout << maxNum;
	return 0;
}
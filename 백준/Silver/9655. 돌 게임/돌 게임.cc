#include <iostream>
using namespace std;
#define MAX 1002

int n, dp[MAX];

int main(void)
{
	cin >> n;
	
	dp[1] = 1; dp[3] = 1;

	for (int i = 4; i <= n; i++)
	{
		if (dp[i - 1] == 0 || dp[i - 3] == 0)
			dp[i] = 1;
		else
			dp[i] = 0;
	}

	//res 
	if (dp[n] == 1) cout << "SK";
	else cout << "CY";
	return 0;
}
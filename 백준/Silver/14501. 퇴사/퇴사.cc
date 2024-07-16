#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef vector<int> vi;

int func(int n, vi& t, vi& p)
{
	vi dp(n + 2, 0);

	for (int i = n; i > 0; i--)
	{
		// 상담을 하는 경우 | 하지 않는 경우 중 최댓값 
		if (i + t[i] <= n + 1)
		{
			dp[i] = max(p[i] + dp[i + t[i]], dp[i + 1]);
		}
		// 상담 기간이 퇴사일을 넘어갈 떄 
		else
		{
			dp[i] = dp[i + 1];
		}
	}
	return dp[1];
}

int main(void)
{
	// var
	int n; cin >> n;
	vi t(n + 1), p(n + 1);

	// input 
	for (int i = 1; i <= n; i++) cin >> t[i] >> p[i];

	// result
	cout << func(n, t, p) << "\n";
	return 0;
}

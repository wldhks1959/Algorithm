#include <iostream>
using namespace std;
#define MAX 302

int dp[MAX], score[MAX];

int res(int a, int b)
{
	return (a > b ? a : b);
}

int main(void)
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) cin >> score[i];

	dp[0] = score[0];
	dp[1] = res(score[0] + score[1], score[1]);
	dp[2] = res(score[0] + score[2], score[1] + score[2]);

	for (int i = 3; i <= n; i++)
	{
		dp[i] = res(score[i - 1] + score[i] + dp[i - 3],
					score[i] + dp[i - 2]);
	}
	cout << dp[n - 1];
	return 0;

}
#include<iostream>
using namespace std;
#define MAX 1001

int dp[MAX];

int tile(int x)
{
	if (x == 1) return dp[x] = 1;
	if (x == 2) return dp[x] = 2;
	if (dp[x] != 0) return dp[x];
	return dp[x] = (tile(x - 1) + tile(x - 2)) % 10007;
}

int main(void)
{
	int n; cin >> n;
	cout << tile(n);
	return 0;
}
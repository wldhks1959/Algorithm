#include <stdio.h>
#define MAX 11

int dp[MAX] = { 0, };

int main() {
	int n; scanf("%d", &n);

	dp[1] = 0;
	dp[2] = 1;

	for (int i = 3; i <= n; i++) {
		int div = i / 2;
		dp[i] = (div * (i - div)) + dp[div] + dp[i - div];
	}

	printf("%d\n", dp[n]);
	return 0;
}
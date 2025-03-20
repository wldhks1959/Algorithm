#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n; scanf("%d", &n);
	int* dp = (int*)malloc(sizeof(int*) * n);

	dp[0] = 1;

	if (n > 1) {
		dp[1] = 2;
		for (int i = 2; i < n; i++)
			dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
	}
	printf("%d", dp[n - 1]);
    free(dp);
	return 0;
}
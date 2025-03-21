#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10001

double dp[MAX];

int main(void) {
	int n; scanf("%d", &n);

	double* arr = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++)
		scanf("%lf", &arr[i]);

	dp[0] = arr[0];
	double ans = dp[0];

	for (int i = 1; i < n; i++) {
		dp[i] = fmax(arr[i], dp[i - 1] * arr[i]);
		ans = fmax(ans, dp[i]);
	}
	printf("%.3f", ans);
	free(arr);

	return 0;
}
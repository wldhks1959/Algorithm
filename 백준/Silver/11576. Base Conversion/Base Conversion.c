#include <stdio.h>
#include <math.h>
#define MAX 25

int a_to_ten(int a, int* num, int m) {
	int res = 0;

	for (int i = 0; i < m; i++)
		res += num[i] * pow(a, m - i - 1);
	return res;
}

void ten_to_b(int c, int b) {
	if(c != 0) {
		ten_to_b(c / b, b);
		printf("%d ", c % b);
	}
}

int main(void) {
	int a, b, c;
	int m;
	int num[MAX];

	scanf("%d %d %d", &a, &b, &m);

	for (int i = 0; i < m; i++)
		scanf("%d", &num[i]);

	c = a_to_ten(a, num, m);
	ten_to_b(c, b);
	return 0;
}
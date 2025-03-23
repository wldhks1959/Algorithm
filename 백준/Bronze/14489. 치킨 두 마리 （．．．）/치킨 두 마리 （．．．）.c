#include <stdio.h>

int main() {
	int a, b; scanf("%d %d", &a, &b);
	int price; scanf("%d", &price);

	int result = a + b;
	if (result >= 2 * price)
		result -= 2 * price;
	printf("%d", result);
	return 0;
}
#include <stdio.h>

int main() {
	int t; 
	scanf("%d", &t);

	int a = 100, b = 100;
	int num1, num2;

	while (t--) {
		scanf("%d %d", &num1, &num2);
		if (num1 > num2) {
			b -= num1;
		}
		else if (num1 < num2) {
			a -= num2;
		}
		else {
			continue;
		}
	}

	printf("%d\n%d", a, b);
	return 0;
}
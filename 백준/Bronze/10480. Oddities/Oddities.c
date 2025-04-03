#include <stdio.h>

void check(int n)
{
	if (n % 2 == 0)
		printf("%d is even\n", n);
	else
		printf("%d is odd\n", n);
}

int main(void)
{
	int t; scanf("%d", &t);
	int num;
	while (t--)
	{
		scanf("%d", &num);
		check(num);
	}
	return 0;
}
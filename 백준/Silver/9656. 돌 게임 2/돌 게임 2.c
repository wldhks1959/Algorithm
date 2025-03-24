#include <stdio.h>

int main(void)
{
	int x;
	scanf("%d", &x);
	if (x % 2 == 0)
		printf("SK");
	else
		printf("CY");
	return 0;
}
#include <stdio.h>

int main(void) 
{
	int n; scanf("%d", &n);

	if (n == 1)
	{
		printf("%d\n", 1);
		return 0;
	}

	int square_num = 1;
	for (int i = 0; i < 30; i++)
	{
		square_num <<= 1;
		if (n == square_num)
		{
			printf("%d\n", 1);
			return 0;
		}
	}

	printf("%d\n", 0);
	return 0;
}
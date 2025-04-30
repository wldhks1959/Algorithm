#include <stdio.h>
int main(void)
{
	int n, r, c;
	scanf("%d%d%d", &n, &r, &c);

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < (n / 2); j++) 
		{
			if ((r % 2 == 0 && c % 2 == 0) || (r % 2 != 0 && c % 2 != 0)) 
			{
				if (i % 2 != 0) printf(".v");
				else printf("v.");
			}
			else 
			{
				if (i % 2 == 0) printf(".v");
				else printf("v.");
			}
		}
		if (n % 2 != 0) 
		{
			if ((r % 2 == 0 && c % 2 == 0) || (r % 2 != 0 && c % 2 != 0)) 
			{
				if (i % 2 != 0) printf(".");
				else printf("v");
			}
			else 
			{
				if (i % 2 == 0) printf(".");
				else printf("v");
			}
		}
		printf("\n");
	}
	return 0;
}
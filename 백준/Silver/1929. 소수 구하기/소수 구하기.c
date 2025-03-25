#include <stdio.h>
#define MAX 1000002

int chk[MAX] = { 1 };

int prime_num(int m, int n)
{
	chk[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; i * j <= n; j++)
		{
			chk[i*j] = 1;
		}
	}
}

int main(void) 
{
	int m, n;
	scanf("%d %d", &m, &n);
	prime_num(m, n);

	for (int i = m; i <= n; i++)
	{
		if (chk[i] ==0 )
			printf("%d\n", i);
	}
	return 0;
}
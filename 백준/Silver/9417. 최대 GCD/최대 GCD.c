//-------------header------------------//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//-------------header------------------//
int arr[102];

int gcd(int a, int b)
{
	int tmp;
	while (b != 0)
	{
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}

int main(void)
{
	//-------------var start----------------//
	int t; 
	scanf("%d\n", &t);

	char line[1000];
	char num[20];
	int n; // 각 라인당 개수
	int v[100];
	int max_gcd = -1;
	int tmp;
	//-------------var end------------------//
	while (t--)
	{
		max_gcd = -1;
		fgets(line, sizeof(line), stdin);

		n = 0;
		char* token = strtok(line, " ");
		while (token != NULL)
		{
			v[n++] = atoi(token);
			token = strtok(NULL, " ");
		}

		for (int i = 0; i < n-1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				tmp = gcd(v[i], v[j]);
				if (max_gcd < tmp) max_gcd = tmp;
			}
		}
		printf("%d\n", max_gcd);
	}
	return 0;
}
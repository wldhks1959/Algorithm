#include<stdio.h>
#include<string.h>
#define MAX 252

int main() 
{
	char str[MAX], c;
	int len;
	while (1) 
	{
		scanf("%s", str);
		if (str[0] == '#' && str[1] == NULL) break;
		len = strlen(str);
		for (int i = len - 1; i >= 0; i--) 
		{
			printf("%c", str[i]);
		}
		c = getc(stdin);
		printf("%c", c);
	}
	return 0;
}
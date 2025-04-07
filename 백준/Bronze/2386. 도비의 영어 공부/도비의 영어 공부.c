#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 252

int main(void)
{
	while (1)
	{
		char ch;
		scanf("%c", &ch);
		getchar();

		if (ch == '#') break;

		char str[max];
		fgets(str, sizeof(str), stdin);

		str[strcspn(str, "\n")] = '\0'; // 개행 제거

		int cnt = 0;
		for (int i = 0; i < strlen(str); i++)
		{
			str[i] = tolower(str[i]);
			if (str[i] == ch) cnt++;
		}
		printf("%c %d\n", ch, cnt);
	}
	return 0;
}
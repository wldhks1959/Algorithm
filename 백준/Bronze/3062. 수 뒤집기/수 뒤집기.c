#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 6

int main(void) 
{
	int t; 
	scanf("%d", &t);

	int num;
	while (t--) 
	{
		scanf("%d", &num);
		
		char s_num[MAX] = "";
		sprintf(s_num, "%d", num);

		char ss_num[MAX] = "";
		for (size_t i = strlen(s_num); i > 0 ; --i)
		{
			char tmp[2] = { s_num[i - 1], '\0' };
			strcat(ss_num, tmp);
		}
		int res = 0;
		
		res = num + atoi(ss_num);

		// 좌우 대칭 확인 
		char res_str[20];
		sprintf(res_str, "%d", res);

		int flag = 1;
		for (size_t i = 0; i < strlen(res_str) / 2; ++i) 
		{
			if (res_str[i] != res_str[strlen(res_str) - 1 - i])
			{
				flag = 0;
				break;
			}
		}

		if (flag) printf("YES\n");
		else printf("NO\n");
	}
	return 0;

}
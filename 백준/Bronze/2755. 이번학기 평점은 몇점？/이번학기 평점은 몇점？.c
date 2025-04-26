#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 100
int main(void)
{
	int n; scanf("%d", &n);

	char subject[MAX];
	char grade_ch[3];

	int* credit = (int*)malloc(sizeof(int) * n);
	double* grade_num = (double*)malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %s", subject, &credit[i], grade_ch);
		if (strcmp(grade_ch, "A+")==0) grade_num[i] = 4.3;
		else if (strcmp(grade_ch, "A0") == 0) grade_num[i] = 4.0;
		else if (strcmp(grade_ch, "A-") == 0) grade_num[i] = 3.7;
		else if (strcmp(grade_ch, "B+") == 0) grade_num[i] = 3.3;
		else if (strcmp(grade_ch, "B0") == 0) grade_num[i] = 3.0;
		else if (strcmp(grade_ch, "B-") == 0) grade_num[i] = 2.7;
		else if (strcmp(grade_ch, "C+") == 0) grade_num[i] = 2.3;
		else if (strcmp(grade_ch, "C0") == 0) grade_num[i] = 2.0;
		else if (strcmp(grade_ch, "C-") == 0) grade_num[i] = 1.7;
		else if (strcmp(grade_ch, "D+") == 0) grade_num[i] = 1.3;
		else if (strcmp(grade_ch, "D0") == 0) grade_num[i] = 1.0;
		else if (strcmp(grade_ch, "D-") == 0) grade_num[i] = 0.7;
		else if (strcmp(grade_ch, "F") == 0) grade_num[i] = 0.0;
	}

	double sum = 0.0;
	int total_credit = 0;
	for (int i = 0; i < n; i++)
	{
		sum += credit[i] * grade_num[i];
		total_credit += credit[i];
	}
	double ans = sum / total_credit;
	
	ans = round(ans * 100) / 100.0;

	printf("%.2lf\n", ans);
	
	free(credit);
	free(grade_num);
	return 0;
}
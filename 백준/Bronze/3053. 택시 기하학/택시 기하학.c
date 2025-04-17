// 3053
#include <stdio.h>
#define PI 3.14159265359

int main(void)
{
    int r;
    double res1, res2;

    scanf("%d", &r);
    res1 = (double)r * r * PI;    
    res2 = (double)r * r * 2;     

    printf("%.6lf\n%.6lf", res1, res2);
    return 0;
}
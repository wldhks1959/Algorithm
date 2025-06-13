#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) 
{
    int answer = 0;
    int a = 12000 * n; // a: 지불해야 할 양꼬치 금액
    int b; // b: 지불해야 할 음료수 금액
    if(n >= 10){
        int tmp = n/10; // tmp: 서비스 음료수 개수
        k = k-tmp;
    }
    b = k*2000;
    answer = a + b;
    return answer;
}
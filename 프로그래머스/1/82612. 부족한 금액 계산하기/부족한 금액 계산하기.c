#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count)
{
    long long answer = 0;
    
    // 3 20 4 10
    // 3 6 9 12 
    // 
    long long sum = 0;
    for(int i=1;i<=count;i++)
    {
        answer += (long long)price*i;
    }
    if(answer > money) 
    {
        answer = answer - money;    
    }
    else
    {
        answer=0;
    }
    
    return answer;
}
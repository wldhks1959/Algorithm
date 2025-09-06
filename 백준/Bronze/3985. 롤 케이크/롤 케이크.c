#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 1002
bool canTake[MAX];

int main()
{

    int l, n;
    int first_cnt=0, first_ans=-1;
    int second_cnt=0, second_ans=-1;
    
    scanf("%d%d", &l, &n);
    for(int idx=1;idx<=n;idx++)
    {
        int left, right, tmp;
        scanf("%d%d", &left, &right);
        
        // 1st ans
        int len = right-left+1;
        if(len > first_cnt)
        {
            first_cnt = len;
            first_ans = idx;
        }
        
        tmp=0;
        // 2nd ans
        for(int i=left; i<=right;i++)
        {
            if(!canTake[i])
            {
                tmp++;
                canTake[i]=true;
            }
        }
        
        if(second_cnt < tmp)
        {
            second_cnt = tmp;
            second_ans = idx;
        }
    }
    
    printf("%d\n%d\n", first_ans, second_ans);
    return 0;
}
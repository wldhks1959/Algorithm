#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int cnt = 0;
int check(int num){
    cnt = 0;
    
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
    return cnt;
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i=left ; i <= right ; i++){
        int tmp = check(i);
        if(tmp % 2 == 0) answer+=i;
        else answer-=i;
    }
    return answer;
}

// left ~ right 
// 약수의 개수 판단 함수 
// 
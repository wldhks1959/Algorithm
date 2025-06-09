#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(const void* a, const void* b){
    return *((int*)a) - *((int*)b); 
}

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    int* answer = (int*)calloc(numbers_len, sizeof(int));
    int* hash = (int*)malloc(sizeof(int)*201);
    memset(hash,-1, sizeof(int)*201);
    
    qsort(numbers, numbers_len, sizeof(int), compare);    
    
    for(int i=0;i<numbers_len;i++){
        for(int j=i+1;j<numbers_len;j++){
            if(hash[numbers[i] + numbers[j]] == -1) 
                hash[numbers[i] + numbers[j]] = hash[numbers[i] + numbers[j]] + 2;
            else 
                hash[numbers[i] + numbers[j]]++;
        }
    }
    int idx=0;
    for(int i=0;i<201;i++){
        if(hash[i] >= 0){
            answer[idx] = i;            
            idx++;
        }
    }
    return answer;
}
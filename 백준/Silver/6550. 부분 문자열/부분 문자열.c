#include <stdio.h>
#include <string.h>
#define MAX 100000

int main(void) {
    char arr[MAX], sub_arr[MAX];

    while (scanf("%s %s", sub_arr, arr) != EOF) 
    {
        int idx = 0;
        for (int i = 0; i < strlen(arr); i++) 
            if (arr[i] == sub_arr[idx]) 
                idx++;

        if (idx != strlen(sub_arr)) 
            printf("No\n");
        else 
            printf("Yes\n");
    }
    return 0;
}

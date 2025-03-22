#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int arr[101] = { 0 };
    int seat_num;
    int bye_cnt = 0;
    for (int i = 0; i < n ; i++){
        scanf("%d", &seat_num);
        if (arr[seat_num] == 1) bye_cnt++;
        arr[seat_num] = 1;
    }
    printf("%d", bye_cnt);
    return 0;
}
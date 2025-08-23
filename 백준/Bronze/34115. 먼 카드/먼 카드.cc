#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(sizeof(int) * 2 * n);
    for (int i = 0; i < 2 * n; i++) {
        scanf("%d", &arr[i]);
    }

    // 각 숫자의 첫 등장 위치 저장
    int* first_occur = (int*)malloc(sizeof(int) * (n + 1));
    for (int i = 0; i <= n; i++) {
        first_occur[i] = -1;
    }

    int max_dist = 0;

    for (int i = 0; i < 2 * n; i++) {
        int x = arr[i];
        if (first_occur[x] == -1) {
            first_occur[x] = i;
        }
        else {
            int distance = i - first_occur[x] - 1;
            if (distance > max_dist) {
                max_dist = distance;
            }
        }
    }

    printf("%d\n", max_dist);

    free(arr);
    free(first_occur);

    return 0;
}
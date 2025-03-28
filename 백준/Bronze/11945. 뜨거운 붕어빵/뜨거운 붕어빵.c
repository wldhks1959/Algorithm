#include <stdio.h>

int n, m;
int arr[11][11];

int main() {
    
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = m; j >= 1; j--) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
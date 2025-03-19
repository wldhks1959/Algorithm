#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int n, cnt = 0;
        scanf("%d", &n); 
        printf("Pairs for %d: ", n);
        for (int i = 1; i <= 12; i++) {
            for (int j = 1; j <= 12; j++) {
                if (i + j == n && i < j) {
                    if (!cnt) {
                        cnt++;
                        printf("%d %d", i, j);
                    }
                    else {
                        printf(", %d %d", i, j);
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}

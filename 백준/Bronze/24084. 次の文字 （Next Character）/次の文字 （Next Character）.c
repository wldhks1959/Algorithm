//24084
#include <stdio.h>
#include <string.h>
#define MAX 100001
int main() {
    int slen;
    char s[MAX];

    scanf("%d %s", &slen, s);
    
    for (int i = 1; i < slen; i++) {
        if (s[i] == 'J') {
            printf("%c\n", s[i - 1]);
        }
    }
    return 0;
}
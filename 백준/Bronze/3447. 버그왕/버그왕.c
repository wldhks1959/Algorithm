#include <stdio.h>
#include <string.h>
#define MAX 101

int main() {
    char str[MAX];
    char bug[] = "BUG";

    while (fgets(str, MAX, stdin) != NULL) {
        while (strstr(str, bug) != NULL) {
            strcpy(strstr(str, bug), strstr(str, bug) + 3);
        }
        printf("%s", str);
    }
    return 0;
}
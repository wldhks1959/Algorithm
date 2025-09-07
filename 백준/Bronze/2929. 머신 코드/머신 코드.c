#include <stdio.h>
#include <ctype.h>
#include <string.h>
#pragma warning(disable:4996)
#define MAX 202
int main()
{
    char str[MAX];
    scanf("%s", str);

    int nop = 0;
    int pos = 0; // 현재까지의 위치

    for (int i = 0; i < strlen(str); i++)
    {
        // 명령이라면?
        if (isupper(str[i]))
        {
            if (pos % 4 != 0)
            {
                int add = 4 - (pos % 4);
                nop += add;
                pos += add;
            }
        }
        pos++;
    }
    printf("%d\n", nop);
    return 0;
}
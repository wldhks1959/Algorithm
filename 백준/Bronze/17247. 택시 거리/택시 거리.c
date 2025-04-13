#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, m;
    int x1 = -1, y1, k;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &k);
            if (k) 
            {
                if (x1 == -1) 
                {
                    y1 = i;
                    x1 = j;
                } else 
                {
                    printf("%d\n", abs(i - y1) + abs(j - x1));
                    return 0;
                }
            }
        }
    }
    return 0;
}
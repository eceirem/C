#include <stdio.h>
int main()
{
    int i, j, k, n, l, m;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (l = 2 * n - 1; l >= 2 * i - 1; l--)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--)
    {
        for (m = 2 * n - 1; m >= 2 * i - 1; m--)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

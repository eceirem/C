#include <stdio.h>
int main()
{
    int i, j, k, l, m, n;
    char c;
    while (scanf(" %c", &c) == 1)
    {
        scanf("%d", &n);
        switch (c)
        {
        case 'r':
            for (i = n; i > 0; i--)
            {
                for (k = 1; k <= i; k++)
                {
                    printf("*");
                }
                for (j = n; j > i; j--)
                {
                    printf("-");
                }
                printf("\n");
            }
            break;
        case 'l':
            for (i = n; i > 0; i--)
            {
                for (m = n; m > i; m--)
                {
                    printf("-");
                }
                for (k = 0; k < i; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;

        case 'd':
            for (i = 1; i <= n; i++)
            {
                for (l = n; l > i; l--)
                {
                    printf("-");
                }
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 'b':
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                for (k = n; k >= j; k--)
                {
                    printf("-");
                }

                printf("\n");
            }
            break;
        }
    }
    return 0;
}
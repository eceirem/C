#include <stdio.h>

int main()
{
    char operator;
    int x, number;

    while (1)
    {
        scanf(" %c", &operator);
        if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
        {
            switch (operator)
            {
            case '+':
                x = 0;
                scanf(" %d", &number);
                while (number != -1)
                {
                    x += number;
                    scanf(" %d", &number);
                }
                printf("%d\n", x);
                break;

            case '-':
                scanf(" %d", &x);
                while (1)
                {
                    scanf(" %d", &number);
                    if (number == -1)
                    {
                        break;
                    }
                    else
                    {
                        x -= number;
                    }
                }
                printf("%d\n", x);
                break;

            case '*':
                x = 1;
                scanf(" %d", &number);
                while (number != -1)
                {
                    x *= number;
                    scanf(" %d", &number);
                }
                printf("%d\n", x);
                break;

            case '/':
                scanf(" %d", &x);
                while (1)
                {
                    scanf(" %d", &number);
                    if (number == 0)
                    {
                        printf("0 ile bolum hatasi, sonuc 0 olarak basilacak\n");
                        x = 0;
                    }
                    else if (number == -1)
                    {
                        break;
                    }
                    else
                    {
                        x /= number;
                    }
                }
                printf("%d\n", x);

                break;
            }
        }
        else
        {
            printf("Hata! Operator dogru degil\n");
        }
    }
    return 0;
}
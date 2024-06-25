#include <stdio.h>
#include <math.h>

int main()
{
    int degree, i = 0, fact = 1, j;
    float percision, x, radian, presin = 1, cursin = 0, mathSin;
    scanf("%d", &degree);
    scanf("%f", &percision);
    radian = degree * M_PI / 180;
    x = radian;
    mathSin = sin(x);
    while (fabs(presin - cursin) > percision)
    {
        presin = cursin;
        fact = 1;
        for (j = 1; j <= 2 * i + 1; j++)
        {
            fact *= j;
        }
        cursin += pow(-1, i) * pow(x, 2 * i + 1) / fact;
        i++;
    }
    printf("sin(%d) = %.6f\n", degree, cursin);
    printf("sin(%d) from math.h = %.6f\n", degree, mathSin);

    return 0;
}
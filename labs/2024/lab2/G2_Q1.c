#include <stdio.h>
#include <math.h>

int main()
{
    int degree, i = 0, fact = 1, j;
    float percision, x, radian, precos = 1, curcos = 0, mathCos;
    scanf("%d", &degree);
    scanf("%f", &percision);
    radian = degree * M_PI / 180;
    x = radian;
    mathCos = cos(x);
    while (fabs(precos - curcos) > percision)
    {
        precos = curcos;
        fact = 1;
        for (j = 1; j <= 2 * i; j++)
        {
            fact *= j;
        }
        curcos += pow(-1, i) * pow(x, 2 * i) / fact;
        i++;
    }
    printf("cos%d) = %.6f\n", degree, curcos);
    printf("cos(%d) from math.h = %.6f\n", degree, mathCos);

    return 0;
}
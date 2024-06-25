#include <stdio.h>
int fact(int x)
{
    if(x <= 1)
    {
        return 1;
    }
    return x * fact(x-1);
}
int main()
{
    int x;
    printf("Please enter the number: ");
    scanf("%d", &x);
    printf("%d! = %d", x, fact(x));
    return 0;
}
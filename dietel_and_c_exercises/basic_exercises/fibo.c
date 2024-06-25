#include <stdio.h>
int fibo(int x)
{
    if (x < 0)
    {
        return -1;
    }
    else if (x == 0)
    {
        return 0;
    }
    else if(x == 1) 
    {
        return 1;
    }
    return fibo(x-1) + fibo(x-2);
    
}
int main()
{
    int y;
    printf("Gormek istediginiz fibo dizisini giriniz: ");
    scanf("%d",&y);
    for(int x = 0 ; x <= y ; x++)
    {
        printf("fibo(%d) = %d\n", x, fibo(x));
    }
}
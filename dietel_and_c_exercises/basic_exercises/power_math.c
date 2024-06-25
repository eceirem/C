//girilen üs değerine kadar sonuçları yazan kod
#include <stdio.h>
int force(int b, int s)
{
    int counter;
    if (b == 0)
    {
        return 0;
    }
    if (b == 1)
    {
        return 1;
    }
    if(s == 0)
    {
        return 1;
    }
    if (s >= 1)
    {
        return b * force(b,s-1);
    }
    return 0;
}
int main()
{
    int b;
    int s;
    printf("us almak istediginiz taban degerini giriniz: \n");
    scanf(" %d", &b);
    printf("us almak istediginiz us degerini giriniz: \n");
    scanf(" %d", &s);
    for(int i = 0 ; i <= s ; i++)
    {
        printf("%d ** %d = %d\n", b, i , force(b,i));
    }
    return 0;
}
//sadece sonuç üreten kod
#include <stdio.h>
int force(int b, int s)
{
    int counter;
    if (b == 0)
    {
        return 0;
    }
    if (b == 1)
    {
        return 1;
    }
    if(s == 0)
    {
        return 1;
    }
    if (s >= 1)
    {
        return b * force(b,s-1);
    }
    return 0;
}
int main()
{
    int b;
    int s;
    printf("us almak istediginiz taban degerini giriniz: \n");
    scanf(" %d", &b);
    printf("us almak istediginiz us degerini giriniz: \n");
    scanf(" %d", &s);
    printf("%d ** %d = %d\n", b, s, force(b,s));
    return 0;
}
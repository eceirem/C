#include <stdio.h>
void main()
{
    int x = 65;
    printf("%s", x >= 60 ? "Passed" : "Failed");
}

/* Yorum satırına alıyorum
multiline olduğunda bana kolaylık sağlıyor. */
// a^b
#include <stdio.h>
int power(int a, int b);
int main()
{
    int a, b;
    printf("Please enter the base: ");
    scanf("%d", &a);
    printf("Please enter the power: ");
    scanf("%d", &b);
    printf("%d^%d = %d", a, b, power(a, b));
    return 0;
}
int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
// ebob
#include <stdio.h>
int greatest(int a, int b);
int main()
{
    int a, b;
    printf("Please enter the integer: ");
    scanf("%d", &a);
    printf("Please enter the integer ");
    scanf("%d", &b);
    printf("%d and %d greatest result is %d", a, b, greatest(a, b));
    return 0;
}
int greatest(int a, int b)
{
    int result = 1;
    int min = 0;
    if (a < b)
        min = a;
    else
        min = b;
    for (int i = 1; i <= min; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            result = i;
        }
    }
    return result;
}
// static, global ve local değişkenler
#include <stdio.h>
void useLocal(void);
void useStaticLocal(void);
void useGlobal(void);
int x = 1;
int main(void)
{
    int x = 5;
    printf("local x in outer scope of main is %d\n", x);
    {
        int x = 7;
        printf("local x in inner scope of main is %d\n", x);
    }
    printf("local x in outer scope of main is %d\n", x);
    useLocal();
    useStaticLocal();
    useGlobal();
    useLocal();
    useStaticLocal();
    useGlobal();
    printf("local x in main is %d\n", x);
}
void useLocal(void)
{
    int x = 25;
    printf("\nlocal x in useLocal is %d after entering useLocal\n", x);
    ++x;
    printf("local x in useLocal is %d before exiting useLocal\n", x);
}
void useStaticLocal(void)
{
    static int x = 50;
    printf("\nlocal static x is %d on entering useStaticLocal\n", x);
    ++x;
    printf("local static x is %d on exiting useStaticLocal\n", x);
}
void useGlobal(void)
{
    printf("\nglobal x is %d on entering useGlobal\n", x);
    x *= 10;
    printf("global x is %d on existing useGlobal\n", x);
}
// Ters digite çevir
#include <stdio.h>
int digit(int x);
int main()
{
    int x;
    printf("Please enter the (max 4-digit) number (-1 to quit): ");
    scanf("%d", &x);
    while (x != -1)
    {
        printf("Reflect this number is %d\n", digit(x));
        printf("Please enter the (max 4-digit) number (-1 to quit): ");
        scanf("%d", &x);
    }
}
// alternatif çözüm
int digit(int x)
{
    int c = 0, x_new = 0, digit = x;
    while (digit > 0)
    {
        digit /= 10;
        c++;
    }
    switch (c)
    {
    case 1:
        x_new = x;
        break;
    case 2:
        x_new = (x % 10) * 10 + x / 10;
        break;
    case 3:
        x_new = (x / 100) + ((x / 10) % 10) * 10 + (x % 10) * 100;
        break;
    case 4:
        x_new = (x / 1000) + ((x / 100) % 10) * 10 + ((x / 10) % 10) * 100 + (x % 10) * 1000;
        break;
    default:
        printf("Entered so much digit!\n");
        break;
    }
}

#include <stdio.h>
int digit(int x);
int power(int x, int y);
int main()
{
    int x;

    while (x != -1)
    {
        printf("Please enter the number (-1 to quit): ");
        scanf("%d", &x);
        printf("Reflect this number is %d\n", digit(x));
    }
}
int digit(int x)
{
    int temp_x = x;
    int numOfDigit = 0;
    int reflect = 0;

    while (temp_x > 0)
    {
        temp_x /= 10;
        numOfDigit++;
    }

    while (numOfDigit >= 0)
    {
        reflect += (x % 10) * power(10, numOfDigit - 1);
        x /= 10;
        numOfDigit--;
    }
    return reflect;
}

int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
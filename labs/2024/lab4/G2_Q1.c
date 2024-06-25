#include <stdio.h>
#include <math.h>
int permutation(int, int);
int combination(int, int);
int factorial(int);
float areaTriangle(float, float, float, float, float, float);
int main()
{
    int option, n, r, perm, comb;
    float x1, x2, x3, y1, y2, y3, area;
    printf("Bir islem secin:\n1. Ucgenin Alanini Hesapla\n2. Permutasyon Hesapla\n3. Kombinasyon Hesapla\n");
    scanf(" %d", &option);
    printf("Girilen secim: %d\n", option);
    switch (option)
    {
    case 1:
        printf("Ucgenin koordinatlarini girin:\nNokta 1 (x1, y1): ");
        scanf(" %f %f", &x1, &y1);
        printf("Girilen x1 ve y1 degeri: %.2f, %.2f\n", x1, y1);
        printf("Nokta 2 (x2, y2): ");
        scanf(" %f %f", &x2, &y2);
        printf("Girilen x2 ve y2 degeri: %.2f, %.2f\n", x2, y2);
        printf("Nokta 3 (x3, y3): ");
        scanf(" %f %f", &x3, &y3);
        printf("Girilen x3 ve y3 degeri: %.2f, %.2f\n", x3, y3);
        area = areaTriangle(x1, y1, x2, y2, x3, y3);
        printf("Ucgenin alani: %.2f", area);
        break;
    case 2:
        printf("Permutasyon icin n ve r degerlerini girin:\n");
        scanf(" %d %d", &n, &r);
        printf("Girilen n ve r degeri: %d, %d\n", n, r);
        perm = permutation(n, r);
        printf("Permutasyon P(%d, %d) = %d\n", n, r, perm);
        break;
    case 3:
        printf("Permutasyon icin n ve r degerlerini girin:\n");
        scanf(" %d %d", &n, &r);
        printf("Girilen n ve r degeri: %d, %d\n", n, r);
        comb = combination(n, r);
        printf("Permutasyon P(%d, %d) = %d\n", n, r, comb);
        break;
    default:
        printf("Gecersiz secim!");
        break;
    }
    return 0;
}
int permutation(int n, int r)
{
    int per;
    per = factorial(n) / factorial(n - r);
    return per;
}
int combination(int n, int r)
{
    int com;
    com = permutation(n, r) / factorial(r);
    return com;
}
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i < x + 1; i++)
    {
        fact *= i;
    }
    return fact;
}
float areaTriangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return fabs(0.5 * (x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3));
}
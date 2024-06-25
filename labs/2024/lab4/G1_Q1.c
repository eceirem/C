#include <stdio.h>
#include <math.h>
float distanceBetween(float, float, float, float);
float reverse(int);
int main()
{
    int option, number, reversedNumber;
    float x1, y1, x2, y2, distance;
    printf("Bir islem secin:\n1. Iki nokta arasindaki uzakligi hesapla\n2. Bir saiyinin tersini bul\n");
    scanf("%d", &option);
    printf("Girilen secim: %d\n", option);
    switch (option)
    {
    case 1:
        printf("x1 ve y1 icin koordinatlari girin:\n");
        scanf(" %f %f", &x1, &y1);
        printf("Girilen x1 ve y1 degeri: %.2f, %.2f\n", x1, y1);
        printf("x2 ve y2 icin koordinatlari girin:\n");
        scanf(" %f %f", &x2, &y2);
        printf("Girilen x2 ve y2 degeri: %.2f, %.2f\n", x2, y2);
        distance = distanceBetween(x1, y1, x2, y2);
        printf("Noktalariniz arasindaki uzaklik: %.2f", distance);
        break;
    case 2:
        printf("Tersini bulmak istediginiz sayiyi girin: ");
        scanf(" %d", &number);
        printf("Girilen sayi: %d\n", number);
        reversedNumber = reverse(number);
        printf("Tersine cevirilmis sayi: %d\n", reversedNumber);
        printf("Tersine cevirilmis sayinin 2 kati: %d\n", reversedNumber * 2);
        break;
    default:
        printf("Gecersiz secim!\n");
        break;
    }
    return 0;
}
float distanceBetween(float x1, float y1, float x2, float y2)
{
    float dis;
    dis = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    return dis;
}
float reverse(int number)
{
    int tempNum, digitNum = 0, reversedNum = 0;
    tempNum = number;
    while (tempNum != 0)
    {
        digitNum++;
        tempNum /= 10;
    }
    tempNum = number;
    for (int i = 0; i < digitNum; i++)
    {
        reversedNum += tempNum % 10 * pow(10, digitNum - i - 1);
        tempNum /= 10;
    }
    return reversedNum;
}
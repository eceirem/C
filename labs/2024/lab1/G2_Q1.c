#include <stdio.h>
int main()
{
    printf("Matematik Oyununa Hos Geldiniz!\nBir cocuga istedigi sekilde sorular sorup cevabini tahmin etmesini isteyeceksiniz...\nBir sonraki hamlenizi secin:\nOlasi hamleler:\n1. Toplama.\n2. Tek/Cift Bulma.\n3. Kucuk Sayi Bulma.\nSeciminizi girin:");
    int choice, number1, number2, guess;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Birinci sayiyi giriniz...");
        scanf("%d", &number1);
        printf("Ikinci sayiyi giriniz...");
        scanf("%d", &number2);
        printf("Tahmini hesap sonucunuzu giriniz...");
        scanf("%d", &guess);
        if (guess == (number1 + number2))
        {
            printf("%d sonucunu basariyla buldunuz tebrikler!", guess);
        }
        else
        {
            printf("Biraz daha toplama islemi calismalisiniz. Kaybettiniz!");
        }
    }
    else if (choice == 2)
    {
        printf("Tek mi cift mi oldugunu bulmak istediginiz sayiyi giriniz.");
        scanf("%d", &number1);
        printf("Tahmini hesap sonucunuzu giriniz(0-Cift,1-Tek)");
        scanf("%d", &guess);
        if (number1 % 2 == 0 && guess == 0)
        {
            printf("Tahmininiz cift sayi, Kazandiniz.");
        }
        else if (number1 % 2 != 0 && guess == 1)
        {
            printf("Tahmininiz tek sayi, Kazandiniz.");
        }
        else
        {
            printf("Yanlis tahmin yaptiniz. Kaybettiniz!");
        }
    }
    else if (choice == 3)
    {
        printf("Birinci sayiyi giriniz...");
        scanf("%d", &number1);
        printf("Ikinci sayiyi giriniz...");
        scanf("%d", &number2);
        if (number1 < number2)
        {
            printf("%d sayisi daha kucuktur.", number1);
        }
        else
        {
            printf("%d sayisi daha kucuktur.", number2);
        }
    }
    else
    {
        printf("Gecersiz secim! Oyun Bitti!");
    }

    return 0;
}
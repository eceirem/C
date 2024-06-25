#include <stdio.h>
int main()
{
    printf("Macera Oyununa Hos Geldiniz!\n");
    printf("Kendinizi gizemli bir magrada buldunuz.\nBir sonraki hamlenizi secin:\nOlasi hamleler:\n1. Magaranin derinliklerine git.\n2. Cikis ara.\n3. Dinlen.\nSeciminizi girin: ");
    int choice, number;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Magaranin derinliklerine dogru ilerliyorsunuz...\nKarsiniza bir ejderha cikiyor!\nBu asamada kurtulmak icin %%50 sansiniz var:\nSansinizi denemek icin 1 ile 10 arasinda bir sayi girin: ");
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            printf(" Ejderha ile arkadas oldunuz!! Kazandiniz!");
        }
        else
        {
            printf(" Ejderha sizi yedi ve kaybettiniz!");
        }
    }
    else if (choice == 2)
    {
        printf("Cikis ariyorsunuz...\nBu asamada kurtulmak icin %%80 sansiniz var:\nSansinizi denemek için 1 ile 10 arasinda bir sayi girin: ");
        scanf("%d", &number);
        if (number == 1 || number == 2)
        {
            printf(" Yolunuzu kaybettiniz acliktan oldunuz kaybettiniz!");
        }
        else
        {
            printf(" Bir yol buldunuz kazandiniz!");
        }
    }
    else if (choice == 3)
    {
        printf("Dinlenmeye karar verdiniz...\nBu asamada kurtulmak icin %%70 sansiniz var:\nSansinizi denemek icin 1 ile 10 arasinda bir sayi girin: ");
        scanf("%d", &number);
        if (number % 3 != 0)
        {
            printf("Bir lamba buldunuz icinden cin cikti dileginizi gerceklestirildi kazandiniz!");
        }
        else
        {
            printf("Zehirli bir orumcek sizi soktu ve oldunuz kaybettiniz!");
        }
    }
    else
    {
        printf("Gecersiz secim! Oyun Bitti!");
    }

    return 0;
}

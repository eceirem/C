#include <stdio.h>

int main()
{
    int arr[10] = {0}, seatsE = 0, seatsF = 0, i, choice;
    char yesOrNo;
    int firstPromt = 1;
    while (seatsE + seatsF < 10)
    {
        if (firstPromt)
        {
            printf("Lutfen \"birinci sinif\" icin 1, \"ekonomi\" icin 2 degerini giriniz: ");
            scanf(" %d", &choice);
        }
        if (choice == 1)
        {
            if (seatsF < 5)
            {
                for (i = 0; i < 5; i++)
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 1;
                        seatsF++;
                        firstPromt = 1;
                        printf("Birinci sinifta koltuk atamaniz %d.\n", i + 1);
                        break;
                    }
                }
            }
            else if (seatsF >= 5)
            {
                printf("Birini sinif bolumu dolmustur. Ekonomi bolumunde oturmak ister misiniz? (Y veya N) ?");
                scanf(" %c", &yesOrNo);
                if (yesOrNo == 'Y' || yesOrNo == 'y')
                {
                    choice = 2;
                    firstPromt = 0;
                }
                else
                {
                    printf("Sonraki ucus 3 saat sonra kalkiyor.\n");
                }
            }
        }
        else if (choice == 2)
        {
            if (seatsE < 5)
            {
                for (i = 5; i < 10; i++)
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 1;
                        seatsE++;
                        firstPromt = 1;
                        printf("Ekonomide koltuk atamaniz %d.\n", i + 1);
                        break;
                    }
                }
            }
            else if (seatsE >= 5)
            {
                printf("Ekonomi bolumu dolmustur. Ekonomi bolumunde oturmak ister misiniz? (Y veya N) ?");
                scanf(" %c", &yesOrNo);
                if (yesOrNo == 'Y' || yesOrNo == 'y')
                {
                    choice = 1;
                    firstPromt = 0;
                }
                else
                {
                    printf("Sonraki ucus 3 saat sonra kalkiyor.\n");
                }
            }
        }
    }

    printf("Bu ucusa ait tum koltuklar dolmustur.\n");
    return 0;
}
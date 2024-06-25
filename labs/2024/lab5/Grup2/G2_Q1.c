#include <stdio.h>

int main()
{
    int arr[15] = {0}, seatsSingle = 0, seatsDouble = 0, i, choice;
    char yesOrNo;
    int firstPromt = 1;
    while (seatsSingle + seatsDouble < 15)
    {
        if (firstPromt)
        {
            printf("Lutfen \"tekli koltuk\" icin 1, \"ikili koltuk\" icin 2 degerini giriniz: ");
            scanf(" %d", &choice);
        }
        if (choice == 1)
        {
            if (seatsSingle < 5)
            {
                for (i = 0; i <= 12; i = i + 3)
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 1;
                        seatsSingle++;
                        firstPromt = 1;
                        printf("Tekli koltuklarda atamaniz %d.\n", i + 1);
                        break;
                    }
                }
            }
            else if (seatsSingle >= 5)
            {
                printf("Tekli koltuklar bolumu dolmustur. Ikili koltuk bolumunde oturmak ister misiniz? (Y veya N) ?");
                scanf(" %c", &yesOrNo);
                if (yesOrNo == 'Y' || yesOrNo == 'y')
                {
                    choice = 2;
                    firstPromt = 0;
                }
                else
                {
                    printf("Sonraki otobus 3 saat sonra kalkiyor.\n");
                }
            }
        }
        else if (choice == 2)
        {
            if (seatsDouble < 10)
            {
                for (i = 0; i < 15; i++)
                {
                    if (i % 3 == 0)
                    {
                        continue;
                    }

                    else if (arr[i] == 0)
                    {
                        arr[i] = 1;
                        seatsDouble++;
                        firstPromt = 1;
                        printf("Ikili koltuklarda koltuk atamaniz %d.\n", i + 1);
                        break;
                    }
                }
            }
            else if (seatsDouble >= 10)
            {
                printf("Ikili koltuk bolumu dolmustur. Tekli koltuk bolumunde oturmak ister misiniz? (Y veya N) ?");
                scanf(" %c", &yesOrNo);
                if (yesOrNo == 'Y' || yesOrNo == 'y')
                {
                    choice = 1;
                    firstPromt = 0;
                }
                else
                {
                    printf("Sonraki otobus 3 saat sonra kalkiyor.\n");
                }
            }
        }
    }

    printf("Bu otobuse ait tum koltuklar dolmustur.\n");
    return 0;
}
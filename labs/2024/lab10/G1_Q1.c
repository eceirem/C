#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *letters[10] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PRS", "TUV", "WXY"};

void write_words(int phone[])
{
    FILE *file = fopen("phone.out", "w");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                for (int a = 0; a < 3; a++)
                {
                    for (int b = 0; b < 3; b++)
                    {
                        for (int c = 0; c < 3; c++)
                        {
                            for (int d = 0; d < 3; d++)
                            {
                                fprintf(file, "%c%c%c%c%c%c%c\n", letters[phone[0]][i],
                                        letters[phone[1]][j],
                                        letters[phone[2]][k],
                                        letters[phone[3]][a],
                                        letters[phone[4]][b],
                                        letters[phone[5]][c],
                                        letters[phone[6]][d]);
                            }
                        }
                    }
                }
            }
        }
    }
    // numarayı yazalım
    fprintf(file, "Phone number is ");
    for (int l = 0; l < 7; l++)
    {
        if (l == 3)
        {
            fprintf(file, "-");
        }
        fprintf(file, "%d", phone[l]);
    }

    fclose(file);
}

int main()
{
    int phone[7] = {0};
    for (int index = 0; index < 7; index++)
    {
        scanf("%d", &phone[index]);
        while (phone[index] < 2 || phone[index] > 9)
        {
            scanf("%d", &phone[index]);
        }
    }
    write_words(phone);

    return 0;
}
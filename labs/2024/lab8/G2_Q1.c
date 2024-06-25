#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int checkAround(int x1, int y1, int x2, int y2)
{

    if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
    {
        return 1;
    }

    return 0;
}

int main()
{
    int position[SIZE][2];
    for (int i = 0; i < SIZE; i++)
    {
        scanf(" %d %d", &position[i][0], &position[i][1]);
    }

    char board[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '-';
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        board[position[i][0]][position[i][1]] = 'Q';
    }

    printf("Vezirlerin yerlestirildigi tahta:\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }

    // tehdit kontrolü
    int safe = 1; // güvenli
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i + 1; j < SIZE; j++)
        {
            if (checkAround(position[i][0], position[i][1], position[j][0], position[j][1]))
            {
                safe = 0;
                break;
            }
        }
        if (!safe)
        {
            break;
        }
    }
    if (safe)
    {
        printf("Tebrikler! Vezir konumlari sekiz vezir problemine uygun");
    }
    else
    {
        printf("Vezir konumlari sekiz vezir problemine uygun degil");
    }
    return 0;
}
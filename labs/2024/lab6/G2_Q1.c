#include <stdio.h>

int main()
{
    int sudoku[9][9], sumRow = 0, sumColumn = 0, sumSquares = 0, i, j, r, c, valid = 1;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf(" %d", &sudoku[i][j]);
        }
    }
    // karelerin kontrolü
    for (i = 0; i < 9; i += 3)
    {
        for (j = 0; j < 9; j += 3)
        {
            sumSquares = 0;
            for (r = i; r < i + 3; r++)
            {
                for (c = j; c < j + 3; c++)
                {
                    sumSquares += sudoku[r][c];
                }
            }
            if (sumSquares != 45)
            {
                printf("%d numarali karede hata var\n", (i / 3) * 3 + (j / 3) + 1);
                valid = 0;
            }
        }
    }

    // satırların kontrolü
    for (i = 0; i < 9; i++)
    {
        sumRow = 0;
        for (j = 0; j < 9; j++)
        {
            sumRow += sudoku[i][j];
        }
        if (sumRow != 45)
        {
            printf("%d numarali satirda hata var\n", i + 1);
            valid = 0;
        }
    }
    // sütunların kontrolü
    for (i = 0; i < 9; i++)
    {
        sumColumn = 0;
        for (j = 0; j < 9; j++)
        {
            sumColumn += sudoku[j][i];
        }
        if (sumColumn != 45)
        {
            printf("%d numarali sutunda hata var\n", i + 1);
            valid = 0;
        }
    }
    // sudokuyu istenen formatta bastırmak
    if (valid)
    {
        printf("Cozumde hata yok\n");
    }

    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf("%d ", sudoku[i][j]);
            if (j == 2 || j == 5)
            {
                printf("|");
            }
        }
        if (i == 2 || i == 5)
        {
            printf("\n--------------------");
        }
        puts("");
    }
    return 0;
}
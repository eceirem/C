#include <stdio.h>

int main()
{
    int maze[9][9], num, x, y;
    // labirenti oluşturmak
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            scanf(" %d", &num);
            maze[i][j] = num;
        }
    }
    // başlangıcın koordinatları almak
    scanf(" %d", &x);
    scanf(" %d", &y);
    // labirente başlangıç noktasını atamak
    maze[x][y] = 5;
    while (1)
    {
        if (maze[x][y + 1] == 1 && y + 1 < 9)
        {
            maze[x][y + 1] = 7;
            y++;
        }
        else if (maze[x + 1][y] == 1 && x + 1 < 9)
        {
            maze[x + 1][y] = 7;
            x++;
        }
        else if (maze[x][y - 1] == 1 && y - 1 >= 0)
        {
            maze[x][y - 1] = 7;
            y--;
        }
        else if (maze[x - 1][y] == 1 && x - 1 >= 0)
        {
            maze[x - 1][y] = 7;
            x--;
        }
        else
        {
            // çıkış var
            if (x == 0 || x == 8 || y == 0 || y == 8)
            {
                printf("Cikis grid[%d][%d] noktasinda bulunmustur\n", x, y);
            }
            else
            {
                printf("Gidilecek yol kalmadi\n");
            }
            break;
        }
    }
    // labirentin son hâlini bastıralım
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            printf("%d ", maze[i][j]);
        }
        puts("");
    }
    return 0;
}
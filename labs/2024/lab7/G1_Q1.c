#include <stdio.h>
#define SIZE 10

void generation(int, int[SIZE][SIZE]);
void print(int, int[SIZE][SIZE]);
void input(int, int[SIZE][SIZE]);

int main()
{
    int universe[SIZE][SIZE] = {0};
    int num_of_g = 0;
    input(SIZE, universe);
    scanf(" %d", &num_of_g);

    printf("Initial state:\n");
    print(SIZE, universe);

    for (int i = 0; i < num_of_g; i++)
    {
        printf("Generation %d:\n", i + 1);
        generation(SIZE, universe);
        print(SIZE, universe);
    }

    return 0;
}

void generation(int size, int universe[SIZE][SIZE])
{
    int new_universe[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int num_of_alive = 0, num_of_dead = 0;

            for (int x = -1; x <= 1; x++)
            {
                for (int y = -1; y <= 1; y++)
                {
                    if (x == 0 && y == 0)
                    {
                        continue;
                    }
                    int nx = i + x;
                    int ny = j + y;
                    if (nx >= 0 && nx < size && ny >= 0 && ny < size)
                    {
                        if (universe[nx][ny] == 1)
                        {
                            num_of_alive++;
                        }
                        else
                        {
                            num_of_dead++;
                        }
                    }
                }
            }
            // kurallara göre yeni evreni güncellemem lazım
            if (universe[i][j] == 1) // canlıysa
            {
                if (num_of_alive == 2 || num_of_alive == 3)
                {
                    new_universe[i][j] = 1;
                }
                else
                {
                    new_universe[i][j] = 0;
                }
            }
            else // ölüyse
            {
                if (num_of_alive == 3)
                {
                    new_universe[i][j] = 1; // canlanır
                }
                else
                {
                    new_universe[i][j] = 0;
                }
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            universe[i][j] = new_universe[i][j];
        }
    }
}
void print(int size, int universe[SIZE][SIZE])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (universe[i][j] == 1)
            {
                printf("# ");
            }
            else
            {
                printf(". ");
            }
        }
        puts("");
    }
}
void input(int size, int universe[SIZE][SIZE])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d", &universe[i][j]);
        }
    }
}
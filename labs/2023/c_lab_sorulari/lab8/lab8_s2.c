#include <stdio.h>
#include <stdlib.h>
int main() {
    char array[10][10];
    char char_array[26];
    int seed = 0;
    scanf("%d", &seed);
    for (int i = 0; i < 26; i++)
    {
        char_array[i] = 'A' + i;
    }    
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = '.';
        }
    }    
    srand(seed);
    int x = 0, y = 0; //Başlangıç noktası
    int direction;
    int max_move = 26;
    int index = 0;    
    while (index < max_move) //Z yi aşamam 
    {
        if (index == 0)
        {
            array[x][y] = char_array[index];            
            index++;
        }        
        direction = (rand()%4) ; //0 yukarı 1 aşağı 2 sağ 3 sol
        if (direction == 0 && x > 0 && array[x-1][y] == '.')
        {
            x = x-1;
            array[x][y] = char_array[index];            
            index++;
        }
        if (direction == 1 && x < 9 && array[x+1][y] == '.')
        {
            x = x+1;
            array[x][y] = char_array[index];            
            index++;
        }
        if (direction == 2 && y < 9 && array[x][y+1] == '.')
        {
            y = y+1;
            array[x][y] = char_array[index];
            index++;
        }
        if (direction == 3 && y > 0 && array[x][y-1] == '.')
        {
            y = y-1;
            array[x][y] = char_array[index];
            index++;
        }              
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", array[i][j]);
        }
        puts("");
    }
    return 0;
}


#include <stdio.h>
int main(){
    char harfler[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                        'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int puanlar[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int counter = 0;
    int totalA = 0, totalB = 0;
    int size = 5;
    char input[size+1];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", input);   
        for (int j = 0; j < size; j++)
        {
            totalA += puanlar[input[j] - 'A'];
        }
        scanf("%s", input);
        for (int j = 0; j < size; j++)
        {
            totalB += puanlar[input[j] - 'A'];
        }
    }
    printf("[%d,%d]", totalA, totalB);
    puts("");
    if (totalA > totalB)
    {
        printf("Player A wins.");
    }
    else{
        printf("Player B wins.");
    }
    return 0;
}
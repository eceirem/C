#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <time.h>

int main(){
    unsigned int zar_sonucu;
    unsigned int c;
    unsigned int sonuc[7] = {0};
    srand(time(NULL));
    for (c = 0; c < 6000 ; c++)
    {
        zar_sonucu =((rand()%6)+1);
        sonuc[zar_sonucu]++;
    }
    printf("Zar\tMiktari\n");
    for (int i=1; i < 7; i++)
    {
        printf("%d\t%d\n",i ,sonuc[i]);
    }
    
}
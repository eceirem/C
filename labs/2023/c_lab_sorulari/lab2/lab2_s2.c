#include <stdio.h>
int main(){
    int sayi;
    int bas3_c = 0, bas2_c = 0, bas1_c = 0;
    scanf("%d", &sayi);
    while (sayi != -1)
    {
        if(sayi / 100 > 0){
            bas3_c ++;
        }
        else if(sayi / 10 > 0){
            bas2_c ++;
        }
        else{
            bas1_c ++;
        }
        scanf("%d", &sayi);
    }
    printf("%d tane 1 basamakli\n%d tane 2 basamakli\n%d tane 3 basamakli", bas1_c, bas2_c, bas3_c);
}
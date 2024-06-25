#include <stdio.h>
#define SIZE 5 
int faktoriyel(int sayi);
int main(void){
    int dizi_1[SIZE] = {0};
    int i;
    for (i = 0; i < 6; i++)
    {
        dizi_1[i] = faktoriyel(i);
    }   
    printf("Number/tValue");
    for (i = 0; i < 6; i++)
    {
        printf("[%d]=%d\n", i, dizi_1[i]);
    }
    return 0;
    
}
int faktoriyel(i){
    if(i == 0){
        return 1;
    }
    if (i == 1)
    {
        return 1;
    }
    if (i > 1)
    {
        return i * faktoriyel(i-1);
    }
    
    
}
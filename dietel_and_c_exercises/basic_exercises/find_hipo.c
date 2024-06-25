#include <stdio.h>
#include <math.h>
void main(){
    int A;
    int B;
    int C;
    printf("Dik kenarlardan birini giriniz: ");
    scanf("%d",&A);
    printf("Dik kenarlardan digerini giriniz: ");
    scanf("%d",&B);
    C = sqrt(A*A+B*B);
    printf("Hipotenusun uzunlugu = %d",C);
}
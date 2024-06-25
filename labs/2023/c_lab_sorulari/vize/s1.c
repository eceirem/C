#include <stdio.h>
#define MAX_SIZE 10
int check_value(int A[], int valueA);
void delete_element(int A[], int pos);
int A[MAX_SIZE];
int SIZE = 0;
int main() {
    int value = 0;  
    printf("10 elemanlik dizin icin tamsayi degerler giriniz.\n");
    while (SIZE < MAX_SIZE) {
        scanf("%d", &A[SIZE]);
        SIZE++;
    }    
    while (1) {
        printf("Silinecek degeri giriniz, bitirmek icin -1\n");
        scanf(" %d", &value);
        if (value == -1){
            break;
        } 
        int pos = check_value(A, value);
        if (pos != -1) {
            delete_element(A, pos);
        }        
        for (int i = 0; i < SIZE; i++) {
            printf("%d ", A[i]);
        }
        puts("");
    }
    printf("Dizinin elemanlari:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", A[i]);
    }
    puts("");
    
    return 0;
}
int check_value(int A[], int valueA) {
    for (int i = 0; i < SIZE; i++) {
        if (A[i] == valueA) {
            return i;
        }
    }
    return -1;
}
void delete_element(int A[], int pos) {
    for (int i = pos; i < SIZE - 1; i++) {
        A[i] = A[i + 1];
    }
    SIZE--;
}
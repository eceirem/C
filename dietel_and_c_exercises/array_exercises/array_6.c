// ♥
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5
void array_sub(int array[], size_t size);
void print_array(const int array[], size_t size);
int add_array(const int array[], size_t size);
int main(){
    srand(time(NULL));
    int array[SIZE];
    size_t size = SIZE;
    for (int i = 0; i < size ; i++)
    {
        array[i] = 1+ rand()%10;
    }
    print_array(array, size);
    printf("%d is sum of array.\n",add_array(array, size));
    array_sub(array, size);
    print_array(array, size);
}
void array_sub(int array[], size_t size){
    for (int i = 0; i < size; i++)
    {
        array[i] -= 5;
    }    
}
void print_array(const int array[], size_t size){
    printf("Array is: \n");
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", array[i]);
    }    
    puts("");
}
int add_array(const int array[], size_t size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
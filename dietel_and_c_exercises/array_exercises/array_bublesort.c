#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void bubbleSort(int array[], int size);
void print_array(const int array[], int size);
int main()
{
    int array[SIZE] = {3, 1, 7, 2, 9, 21, 4, 7, 6, 1};
    int size = SIZE;
    print_array(array, size);
    bubbleSort(array, size);
    print_array(array, size);
}
void bubbleSort(int array[], int size)
{
    int temp = 0;
    for (int i = 0; i < size ; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }           
    }
}
void print_array(const int array[], int size){
    printf("Array is: \n");
    for (int i = 0; i < size ; i++)
    {
        printf("%d ", array[i]);
    }    
    puts("");
}

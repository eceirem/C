#include <stdio.h>
#define SIZE 10
int lineer_search(int array[], int size, int key);
void print_array(const int array[], int size);
void bubbleSort(int array[], int size);
int main()
{
    int key = 0;
    int size = SIZE;
    printf("Please enter the number: ");
    scanf("%d", &key);
    int array[10] = {1, 7, 4, 5, 9, 10, 11, 4, 2, 4};
    printf("Array is: ");
    print_array(array, size);
    puts("");
    printf("%d is your key which is searching.", key);
    puts("");
    lineer_search(array, size, key);
    bubbleSort(array, size);
    puts("");
    printf("\nSorted array is: \n");
    print_array(array, size);
}
int lineer_search(int array[], int size, int key)
{
    int c = 0;
    int index_c = 0;
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            c++;
        }
    }
    int index_list[c];
    for (int i = 0; i < size; i++)
    {
        if (key == array[i])
        {
            index_list[index_c] = i;
            index_c++;
        }
    }
    printf("key %d has been in these(or this) indexes: ", key);

    for (int i = 0; i < c; i++)
    {
        printf("%d ", index_list[i]);
    }
}
void print_array(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    puts("");
}
void bubbleSort(int array[], int size)
{
    int temp = 0;
    for (int i = 0; i < size; i++)
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
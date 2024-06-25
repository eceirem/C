#include <stdio.h>
#define SIZE 15 
int BinarySearch(const int a[], int key, size_t low, size_t high);
void PrinHeader(void);
void PrintRow(const int a[], size_t low, size_t middle, size_t high);
int main(void){
    int a[SIZE] = {0};
    int key = 0;
    for (size_t i = 0; i < SIZE ; i++) //Dizi elemanlarını atadım.
    {
        a[i] = i*2;
    }
    printf("Please enter the number between 0 and 28: ");
    scanf(" %d", &key); //Bulunmak istenen key soruldu
    PrinHeader();
    int result = BinarySearch(a, key, 0, SIZE-1); //BinarySearch fonksiyonun return değeri var. Eğer -1 dönerse not found.
    if(result != -1){
        printf("\n%d is found at index %d", key, result);
        puts("");
    }
    else{
        printf("\n%d not found in array.\n", key);
        puts("");
    }
    
}
int BinarySearch(const int a[], int key, size_t low, size_t high){
    while (low <= high)
    {
        size_t  middle = (low + high)/2;
        PrintRow(a, low, middle, high);
        if (key == a[middle])
        {
            return middle;
        }
        else if (key < a[middle])
        {
            high = middle-1;
        }
        else{
            low = middle+1;
        }        a
    }
    return -1;    
}
void PrinHeader(void){
    for (size_t i = 0; i < SIZE; i++)
    {
        printf("%3d ", i);
    }
    puts("");
    for (size_t i = 0; i < SIZE*4 ; i++)
    {
        printf("%s", "~");
    }
    puts("");
}

void PrintRow(const int a[], size_t low, size_t middle, size_t high){
    for (size_t i = 0; i < SIZE; i++)
    {
        if (i < low || i > high)
        {
            printf("%s", "    ");
        }
        else if (i == middle)
        {
            printf("%3d*", a[i]);
        }
        else{
            printf("%3d ", a[i]);
        }      
    }
    puts("");
}

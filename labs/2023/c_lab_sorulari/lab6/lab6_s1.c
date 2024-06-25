#include <stdio.h>
int is_sorted(int array[], int size);
int main(){
    int size = 0;
    int num = 0;
    int bool;
    scanf("%d", &size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &num);
        array[i] = num;
    }
    bool = is_sorted(array, size);
    if(bool){
        printf("SORTED");
    }
    else{
        printf("UNSORTED");
    }
    
}
int is_sorted(int array[], int size){
    for (int i = 0; i < size - 1 ; i++)
    {
        if (array[i]<array[i+1])
        {
            continue;
        }
        else{
            return 0;
        }
    }
    return 1;
}
#include  <stdio.h>
void staticArrayInit(void);
void automaticArrayInit(void);
int main(){
    puts("First call to each function: ");
    staticArrayInit();
    automaticArrayInit();
    puts("Second call to each function: ");
    staticArrayInit();
    automaticArrayInit();
    puts("");
}
void staticArrayInit(void){
    static int array1[3]={0};
    puts("\nValues on entering staticArrayInit: ");
    for (int i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d ", i, array1[i]);
    }   
    puts("\nValues on exiting staticArrayInit: ");

    for (int i = 0; i <= 2; i++)
    {
        printf("array1[%d] = %d ", i, array1[i] += 5);
    }   
}
void automaticArrayInit(void){
    int array2[3]={0};
    puts("\nValues on entering automaticArrayInit: ");
    for (int i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d", i, array2[i]);
    }
    puts("\nValues on exiting automaticArrayInit: ");
    for (int i = 0; i <= 2; i++)
    {
        printf("array2[%d] = %d", i, array2[i]+=5);
    }
    puts("");    
}
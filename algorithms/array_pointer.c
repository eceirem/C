#include <stdio.h>
void modifyArray(int a[], int size);
void modifyElement(int b);
void modifyElementPointer(int *pointer);
void printArray(int c[], int size);
int main(){
      int arr[5] = {1,2,3,4,5};
      printf("%p %p %p", &arr, &arr[0], arr);
      puts("");
      int *point;
      point = &arr[2];
      printf("%p", point);
      puts("");
      printf("Print the first array: \n");
      printArray(arr,5);
      printf("Print the second array (after modifyArray): \n");    
      modifyArray(arr,5);
      printArray(arr,5);
      printf("Print the third array (after modifyElement): \n");    
      modifyElement(arr[2]);
      printArray(arr,5);
      printf("Print the forth array (after modifyElementPointer): \n");    
      modifyElementPointer(&arr[1]);
      printArray(arr,5);
      return 0;
}
void modifyArray(int a[], int size){
      for (int i = 0; i < size; i++)
      {
            a[i] *= 2;
      }      
}
void modifyElement(int b){
      b *= 2;
      printf("Modify element value is : %d \n", b);
}
void modifyElementPointer(int *pointer){
      *pointer *= 2;
      printf("Modify element by pointer is : %d \n", *pointer);
}

void printArray(int c[], int size){
      for (int i = 0; i < size; i++)
      {
            printf("%d ", c[i]);
      }
      puts("");
      
}
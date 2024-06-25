#include <stdio.h>

int main() {
    int arr1[10], arr2[10], arr3[20];
    int i, n1, n2, m, index = 0, index1 = 0, index2 = 0;
    
    printf("Please enter the number of elements in array1: ");
    scanf("%d", &n1);
    
    printf("Enter the elements of the first array: ");
    for (i = 0; i < n1; i++) {
        printf("\n arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    
    printf("Please enter the number of elements in array2: ");
    scanf("%d", &n2);
    
    printf("Enter the elements of the second array: ");
    for (i = 0; i < n2; i++) {
        printf("\n arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    
    while (index1 < n1 && index2 < n2) {
        if (arr1[index1] < arr2[index2]) {
            arr3[index] = arr1[index1];
            index1++;
        } else {
            arr3[index] = arr2[index2];
            index2++;
        }
        index++;
    }

    // İkinci dizide elemanlar kalmışsa
    while (index1 < n1) {
        arr3[index] = arr1[index1];
        index1++;
        index++;
    }

    // İkinci dizide elemanlar kalmışsa
    while (index2 < n2) {
        arr3[index] = arr2[index2];
        index2++;
        index++;
    }
    
    m = n1 + n2;
    printf("The merged array is\n");
    for (int i = 0; i < m; i++) {
        printf("arr3[%d] = %d\n", i, arr3[i]);
    }

    return 0;
}

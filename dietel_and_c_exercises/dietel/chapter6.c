//Union of Sets
#include <stdio.h>

void print_array(int a[], int size);

int main() {
    int size = 5;
    int array1[size], array2[size], union_array[size*2];
    int index = 0;
    
    printf("Please enter the 5 elements of array1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Please enter the 5 elements of array2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }
    
    // Birleşim kümesini hesapla
    for (int i = 0; i < size; i++) {
        int exists_in_union = 0;
        // Birleşim kümesinde eleman var mı diye kontrol et
        for (int j = 0; j < index; j++) {
            if (array1[i] == union_array[j]) {
                exists_in_union = 1;
                break;
            }
        }
        // Eğer birleşim kümesinde yoksa ekle
        if (!exists_in_union) {
            union_array[index] = array1[i];
            index++;
        }
        exists_in_union = 0;
        // Aynısını ikinci küme için yap
        for (int j = 0; j < index; j++) {
            if (array2[i] == union_array[j]) {
                exists_in_union = 1;
                break;
            }
        }
        if (!exists_in_union) {
            union_array[index] = array2[i];
            index++;
        }
    }
    
    printf("Union array is: ");
    print_array(union_array, index);
}

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

//Intersection of Sets
//Union of Sets
#include <stdio.h>

void print_array(int a[], int size);

int main() {
    int size = 5;
    int array1[size], array2[size], intersect_array[size];
    int index = 0;
    for (int i = 0; i < size*2 ; i++)
    {
        intersect_array[i] = 0;
    }
    printf("Please enter the 5 elements of array1:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }
    
    printf("Please enter the 5 elements of array2:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }
    
    // kesişim kümesini hesapla
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(array1[i] == array2[j]){
                intersect_array[index] = array1[i];
                index++;
            }
        }
    }
    
    printf("Intersection array is: ");
    print_array(intersect_array, index);
}

void print_array(int a[], int size) {
    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
            printf("%d ", a[i]);
    }    
    printf("\n");
}
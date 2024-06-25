#include <stdio.h>
void my_sort(int a[], int low, int high);
int divide(int a[], int low, int high);

int main()
{
    int size = 0;
    scanf(" %d", &size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        scanf(" %d", &a[i]);
    }
    my_sort(a, 0, size - 1);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
void my_sort(int a[], int low, int high)
{
    int middle;
    if (low >= high)
    {
        return;
    }
    middle = divide(a, low, high);
    my_sort(a,low,middle-1);
    my_sort(a,middle+1,high);
}
int divide(int a[], int low, int high) {
    int mid_element = a[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (a[j] < mid_element) {
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp = a[i + 1];
    a[i + 1] = a[high];
    a[high] = temp;
    return i + 1;
}

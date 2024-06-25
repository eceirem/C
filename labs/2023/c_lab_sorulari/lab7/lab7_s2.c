#include <stdio.h>

int main()
{
    int size1;
    int size2;
    scanf("%d", &size1);
    int array1[size1];
    scanf("%d", &size2);
    int array2[size2];
    int size3 = size1 + size2;
    int same_array[size3];
    for (int i = 0; i < size3; i++)
    {
        same_array[i] = 0;
    }        
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &array1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &array2[i]);
    }
    int index = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (array1[i] == array2[j])
            {
                same_array[index] = array1[i];
                index++;
            }
        }
    }
    for (int i = 0; i < size3; i++)
    {
        if (same_array[i] != 0)
            printf("%d ", same_array[i]);
    }
    return 0;
}


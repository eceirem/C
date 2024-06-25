#include <stdio.h>
#include <string.h>
int compare(char *str1, char *str2);
void sort(char dizi[][20], int size);
int main()
{
    int str_len = 0;
    scanf("%d", &str_len);
    char string[str_len][20];
    for (int i = 0; i < str_len; i++)
    {
        scanf(" %s", string[i]);
    }
    sort(string, str_len);
    for (int i = 0; i < str_len; i++)
    {
        printf("%s\n", string[i]);
    }
}
int compare(char *str1, char *str2)
{
    int i = 0;
    while (*(str1 + i) != '\0' || *(str2 + i) != '\0')
    {
        if (*(str1 + i) < *(str2 + i))
        {
            return -1;
        }
        if (*(str1 + i) > *(str2 + i))
        {
            return 1;
        }
        i++;
    }
    if (*(str1 + i) == '\0' && *(str2 + i) == '\0')
    {
        return 0;
    }
}
void sort(char dizi[][20], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++) // bir sonrakilerle karşılaştırsın diye i yi de çıkardık.
        {
            if (compare(dizi[j], dizi[j + 1]) > 0) // zaten < 0 durumu için yer değiştirmez. > 0 için bakmamaız lazım.
            {
                char temp[20]; // yer değiştirmek için temp bir değer tutmalıyız. elimde strr var bu yüzden temp array lazım.
                strcpy(temp, dizi[j]);
                strcpy(dizi[j], dizi[j + 1]);
                strcpy(dizi[j + 1], temp);
            }
        }
    }
}
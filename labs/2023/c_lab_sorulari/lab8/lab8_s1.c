#include <stdio.h>
#define Size 26
int is_anagram(int size, int freq1[], int freq2[]);
int main(){
    int size = Size;
    int freq1[Size] = {0};
    int freq2[Size] = {0};
    char str1[100];
    char str2[100];
    int len1 = 0;
    int len2 = 0;
    scanf("%s", str1);    
    scanf("%s", str2);
    int index = 0;
    while (str1[index] != '\0') {
        ++freq1[str1[index] - 'a'];
        index++;
    }
    index = 0;
    while (str2[index] != '\0') {
        ++freq2[str2[index] - 'a'];
        index++;
    }
    int i = 0;
    while (str1[i] != '\0')
    {
        len1++;
        i++;
    }
    int j = 0;
    while (str2[j] != '\0')
    {
        len2++;
        j++;
    }
    if (len1 == len2)
    {
        if(is_anagram(size, freq1, freq2)){
            printf("Stringler anagramdır");
        }
        else{
            printf("Stringler anagram değildir");
        }
    }
    else{
        printf("Stringler eşit uzunlukta olmadığından anagram değildir");
    }
}
int is_anagram(int size, int freq1[size], int freq2[size]){
    for (int i = 0; i < size; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return 0;
        }
    }
    return 1;
    
}
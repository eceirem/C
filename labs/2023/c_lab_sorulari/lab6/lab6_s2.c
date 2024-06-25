//Göderdiğim Kod
#include <stdio.h>
void count_digit(int num);
int main(){
    int num;
    scanf("%d", &num);
    count_digit(num);
    return 0;
}
void count_digit(int num){
    int array[10] = {0};
    int x = 0;
    while (num > 0)
    {
        x = num % 10;
        array[x]++;
        num /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d\t%d\t",i, array[i]);
       for (int j = 0; j < array[i]; j++){
            printf("%c", '*');
       }  
       puts("");
    }   
}
//Alternatif Çözüm 
#include <stdio.h>
void count_digit(int num);
int main(){
    int num;
    scanf("%d", &num);
    count_digit(num);
    return 0;
}
void count_digit(int num){
    int array[10] = {0};
    int x = 0;
    int c = 0;
    int num_copy = num;  
    while (num_copy > 0) 
    {
        x = num_copy % 10;
        num_copy /= 10;
        c++;
    }
    int list[c]; 
    num_copy = num; 
    for (int i = c-1; i >= 0; i--) // sayının basamaklarını tersten list dizisine atıyoruz
    {
        list[i] = num_copy % 10;
        num_copy /= 10;
    }
    for (int i = 0; i < c; i++) // her bir sayı basamağı için array dizisini güncelliyoruz
    {
        array[list[i]]++;
    }
    for (int i = 0; i < 10; i++)
    {
       printf("%d\t%d\t",i, array[i]);
       for (int j = 0; j < array[i]; j++){
            printf("%c", '*');
       }  
       puts("");
    }   
}
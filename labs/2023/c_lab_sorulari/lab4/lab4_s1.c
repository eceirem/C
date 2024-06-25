#include <stdio.h>
int is_prime(int sayi);
void print_prime(int sayi);
void print_not_prime(int sayi);
int main(){
    int prime_count = 0, not_prime_count = 0;
    int sayi = 0;
    do
    {
        scanf("%d", &sayi);
        if (sayi == -1)
        {
            break;
        }
        else{
            if (is_prime(sayi)){
            print_prime(sayi);
            prime_count++;
            }
            else{
                print_not_prime(sayi);
                not_prime_count++;
            } 
        }                     
    } while (sayi != -1);
        printf("Toplam %d sayi asal, %d sayi asal degildir\n", prime_count, not_prime_count);
    return 0;
}
int is_prime(int sayi){ 
    if (sayi == 1)
    {
        return 0;
    }    
    for (int i = 2; i < sayi ; i++)
    {   
        if (sayi % i == 0)
        {
            return 0;
        }        
    }
    return 1;
}
void print_prime(int sayi){
    printf("%d sayisi asaldir\n", sayi);
}
void print_not_prime(int sayi){
    printf("%d sayisi asal degildir\n", sayi);
}
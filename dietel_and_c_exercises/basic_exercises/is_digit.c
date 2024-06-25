#include <stdio.h>

void get_input(int size, char array[]); //Rastgele metin içeren bir input alıyoruz.
int isDigit(char c);     // Sayı mı değil mi? 0 veya 1 döndürür.
void create_array(int size, char array[], int new_size, int new_array[]); // Elimdeki mevcut karışık stringi alır ve digitleri içinden elemek için fonksiyona göderir ve yeni bir digit array oluşturur.
void print_array(const char array[], int size);
void print_array_d(const int array[], int size);

int main()
{
    int size = 20;
    int new_size = 12;
    char array[size];
    int new_array[new_size];
    get_input(size, array);
    create_array(size, array, new_size, new_array);
}
void get_input(int size, char array[])
{
    int index = 0;
    char ch = 'x';
    while (1)
    {
        scanf("%c", &ch);
        if (ch == '\n') {
            break;
        }
        array[index] = ch;
        index++;
    }    
    print_array(array, size);
}

int isDigit(char c){
    if(c >= '0' && c <= '9'){  //digit ise 1 döndür. değilse 0.
        return 1;
    }
    return 0;   
}

void create_array(int size, char array[], int new_size, int new_array[]){
    int index = 0;
    for (int i = 0; i < size ; i++)
    {
        if (isDigit(array[i]))
        {
            new_array[index] = array[i] - '0';
            index++;
        }             
    }
    print_array_d(new_array,index);
}

void print_array(const char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == '\0') { // eğer eleman '\0' ise yazdırmayı bitir
            break;
        }
        printf("%c ", array[i]);
    }
    puts("");
}

void print_array_d(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);        
    }
    puts("");
}

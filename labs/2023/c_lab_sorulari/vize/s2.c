#include <stdio.h>
int SIZE = 0;
void delete_element(char prth[], int delete);
int check_value(char prth[], char ch2);
int main(){
    int delete = 0;
    int size = 0;
    char x;
    scanf("%d", &size);
    char prth[size*2];
    for (int i = 0; i < size*2; i++)
    {
        x = getchar();
        if (x != '\n')
        {
            prth[i] = x;
        }
        SIZE++;
    }
    char ch = '(';
    for (int i = 0; i < SIZE; i++) {
        if (prth[i] == ch) {
            delete = check_value(prth, ch);
            delete_element(prth, delete);
            char ch2 = ')';
            delete = check_value(prth, ch2);
            if (delete == -1) {
                printf("Parantezler uyumlu değil");
                return 0;
            }
            delete_element(prth, delete);
        }
    }
    char ch3 = '[';
    for (int i = 0; i < SIZE; i++) {
        if (prth[i] == ch3) {
            delete = check_value(prth, ch3);
            delete_element(prth, delete);
            char ch4 = ']';
            delete = check_value(prth, ch4);
            if (delete == -1) {
                printf("Parantezler uyumlu değil");
                return 0;
            }
            delete_element(prth, delete);
        }
    }
    char ch5 = '{';
    for (int i = 0; i < SIZE; i++) {
        if (prth[i] == ch5) {
            delete = check_value(prth, ch5);
            delete_element(prth, delete);
            char ch6 = '}';
            delete = check_value(prth, ch6);
            if (delete == -1) {
                printf("Parantezler uyumlu değil");
                return 0;
            }
            delete_element(prth, delete);
        }
    }
    if (SIZE == 0)
    {
        printf("Parantezler uyumlu");
    }
    else
    {
        printf("Parantezler uyumlu değil");
    }   
    return 0;
}
void delete_element(char prth[], int delete) {
    for (int i = delete; i < SIZE - 1; i++) {
        prth[i] = prth[i + 1];
    }
    SIZE--;
}
int check_value(char prth[], char ch2) {
    for (int i = 0; i < SIZE; i++) {
        if (prth[i] == ch2) {
            return i;
        }
    }
    return -1;
}
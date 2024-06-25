#include <stdio.h>
int main(){
    int month_day, month_begin, x;
    scanf("%d", &month_day);
    scanf("%d", &month_begin);
    printf("Aydaki gün sayısını yazınız: %d\n", month_day);
    printf("Ayın başlangıç gününü yazınız (1= Mon, 7=Sun): %d\n", month_begin);
    if (month_begin == 1)
    {
        printf("1\t");
        x = 1;
    }
    else if (month_begin == 2)
    {
        printf("\t1\t");
        x = 2;
    }
    else if (month_begin == 3)
    {
        printf("\t\t1\t");
        x = 3;
    }
    else if (month_begin == 4)
    {
        printf("\t\t\t1\t");
        x = 4;
    }
    else if (month_begin == 5)
    {
        printf("\t\t\t\t1\t");
        x = 5;
    }
    else if (month_begin == 6)
    {
        printf("\t\t\t\t\t1\t");
        x = 6;
    }
    else if (month_begin == 7)
    {
        printf("\t\t\t\t\t\t1\t");
        x = 7;
    }    
    for (int i = 2; i <= month_day; i++)
    {
        if(x % 7 != 0){
            printf("%d\t", i);
            x++;
        }
        else{
            printf("\n");
            printf("%d\t", i);
            x++;
        }
    }
    
}
#include <stdio.h>
#include <math.h>
int main(){
    int hour, min, sum=0, diff1, diff2;
    scanf("%d", &hour);
    scanf("%d", &min);
    if (8 <= hour && hour <= 9)
    {
        sum += hour*60 + min;
        diff1 = abs(490 - sum);
        diff2 = abs(583 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 8:10 varış 10:16", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 9:43 varış 11:52", hour, min);
        }  
    }
    else if (10<= hour && hour <= 11){
        sum += hour*60 + min;
        diff1 = abs(679 - sum);
        diff2 = abs(583 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 11:19 varış 1:31", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 9:43 varış 11:52", hour, min);
        }  
    }
    else if (11<= hour && hour <= 12){
        sum += hour*60 + min;
        diff1 = abs(679 - sum);
        diff2 = abs(767 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 11:19 varış 1:31", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 12:47 varış 15:10", hour, min);
        }  
    }
    else if (12<= hour && hour <= 14){
        sum += hour*60 + min;
        diff1 = abs(850- sum);
        diff2 = abs(767 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 14:10 varış 14:17", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 12:47 varış 15:10", hour, min);
        }  
    }
    else if (14<= hour && hour <= 15){
        sum += hour*60 + min;
        diff1 = abs(850 - sum);
        diff2 = abs(945 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 14:10 varış 14:17", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 15:45 varış 17:55", hour, min);
        }  
    }
    else if (15<= hour && hour <= 19){
        sum += hour*60 + min;
        diff1 = abs(1150 - sum);
        diff2 = abs(945 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 19:10 varış 21:20", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 15:45 varış 17:55", hour, min);
        }  
    }
    else if (19<= hour && hour <= 21){
        sum += hour*60 + min;
        diff1 = abs(1150 - sum);
        diff2 = abs(1305 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 19:10 varış 21:20", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 21:45 varış 23:58", hour, min);
        }  
    }
    else if (19<= hour && hour <= 21){
        sum += hour*60 + min;
        diff1 = abs(1150 - sum);
        diff2 = abs(1305 - sum);
        if (diff1 < diff2)
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 19:10 varış 21:20", hour, min);
        }        
        else
        {
            printf("Saati giriniz: %d:%d\nEn yakın kalkış 21:45 varış 23:58", hour, min);
        }  
    }
    else if (21<= hour && hour <= 24){
        printf("Saati giriniz: %d:%d\nEn yakın kalkış 21:45 varış 23:58", hour, min);
    }
    else if (0<= hour && hour < 3)
    {
        printf("Saati giriniz: %d:%d\nEn yakın kalkış 21:45 varış 23:58", hour, min);
    }
    else
    {
        printf("Saati giriniz: %d:%d\nEn yakın kalkış 8:10 varış 10:16", hour, min);
    }    
    return 0;
}
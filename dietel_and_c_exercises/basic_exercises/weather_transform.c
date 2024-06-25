#include <stdio.h>
#include <ctype.h>
void main(){
    char unit;
    float temp;
    printf("\nEnter the unit of temp (C/F): ");
    scanf("%c,",&unit);
    unit = toupper(unit); //C ve c arasında fark görmesin diye yaptık.
    if ( unit == 'C'){   
        printf("\nPlease enter the temp in Celcius: ");
        scanf("%f",&temp);
        temp = (temp * (9/5)) + 32;
        printf("\nThe weather %.2f degrees in Fahrenheit.",temp);
    }
    else if (unit == 'F'){
        printf("\nPlease enter the temp in Fahrenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32) * 5)/9;
        printf("\nThe weather %.2f degrees in Celcius.",temp);
    }
    else{
        printf("\n%c An undifened unit.",unit);
    }

}

//the wheather condition
#include <stdio.h>
#include <stdbool.h>
void main(){
    float temp;
    bool sunny = true;
    printf("Enter the weather temp please: ");
    scanf("%f",&temp);
    if (temp > 0 &&  temp <= 10){
        printf("There is no froze outside but the weather is cold.");
    }
    else if (temp > 10 && temp <= 20){
        printf("There is a chill weather outside.");
    }
    else if(temp > 20 && temp < 25){
        printf("There is a warm weather outside.");
    }
    else if (temp >30 && sunny == true){
        printf("There is a risk for oldest people.");
    }
    else if (temp > 25){
        printf("There is a hot weather outside.");
    }
    else{
        printf("There is a freezing weather outside. Be careful please!");
    }
    

}
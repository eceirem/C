#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    char* operation = argv[1]; //.a/out 0. eleman operatör 1. eleman olur.
    int numbers_count =  argc - 2; //işlem adı ve .a/out 2 eleman
    int result = 0;
    float result_divide = 0.0;
    if (strcmp(operation, "add") == 0)
    {
        for (int i = 2; i < argc; i++)
        {
            result += (int)atof(argv[i]);
        }
        printf("%d", result);
    }
    else if (strcmp(operation, "subtract") == 0)
    {
        int first_number = (int)(atof(argv[2])); //Çıkarılacak olan sayı ilk sayı
        for (int i = 3; i < argc; i++)
        {
            first_number -= (int)(atof(argv[i]));
        }
        result = first_number;
        printf("%d", result);
    }
    else if (strcmp(operation, "multiply") == 0)
    {
        result = 1;
        for (int i = 2; i < argc; i++)
        {
            result *= (int)(atof(argv[i]));
        }
        printf("%d", result);
    }
    else if (strcmp(operation, "divide") == 0){
        float num1 = (float)(atof(argv[2]));
        float num2 = (float)(atof(argv[3]));
        result_divide = num1/num2;
        printf("%.2f", result_divide);
    }
    else 
    {
        printf("GECERSIZ ISLEM");
    }
    
    return 0;
}

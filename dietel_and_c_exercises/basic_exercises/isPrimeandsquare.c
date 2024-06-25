#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void main(){
    int num;
    int i;
    bool isPrime = false;
    printf("Please enter a number.\n");
    scanf("%d",&num);
    for (i = 2; i < ((int)num/2)+1; i++)
    {
        if(num % i == 0)
        {
           isPrime = false;
           break;
        }
        else
        {
            isPrime = true;
        }
    }
    if (isPrime == false)
    {
        printf("%d is not a prime number.\n",num);
    }
    else
    {
        printf("%d is a prime number.\n",num);
    }    
}
    
    
#include <stdio.h>
void main(){
    int i = 0;
    for (;;)
    {        
        if(i <= 10){
            printf("%d's square = %d\n",i,i*i);
        }
        if(i > 10){
            break;
        }
        i++;
    }
    
}
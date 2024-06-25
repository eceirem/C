//4.8
#include <stdio.h>
int main(){ 
    int x, i, j;
    printf("%s", "Enter an integer in the range 1-20: ");
    scanf("%d", &x);
    for(i = 1; i <= x; i++){
        for(j = 1; j <= x; j++){
            if(j==i)    
                printf("%c",'@');
            else
                printf(" ");
        }
        printf("\n");
    }
}
//4.9
#include <stdio.h>
int main(){ 
    int sum = 0, number, count, i;
    printf("Please enter that number of entering: ");
    scanf("%d", &count);
    for(i = 0; i < count; i++){
        printf("Please enter a number: ");
        scanf("%d", &number);
        sum += number;
    }
    printf("Entered nunmbers average is %d", sum/count);

}
//4.10
#include <stdio.h>
int main(){ 
    int celcius;
    float fahr;
    for(celcius=30; celcius<= 50; celcius++){
        fahr = ((float)celcius * 9)/5 + 32.0;
        printf("%d Celcius\t\t%.2f Fahrenheit\n",celcius,fahr);
    }
    return 0;
}
//4.11
#include <stdio.h>
int main(){ 
    int i, sum = 0;
    for(i=0;i<=100;i+=7){
        sum += i;
    }
    printf("Sum of all multiples of 7 from 1 to 100: %d", sum);
}
//4.12
#include <stdio.h>
int main(){
    int i, j, isprime;
    for(i=2;i<=100;i++){
        isprime = 1;
        for(j=2;j<i;j++){
            if(i % j == 0){
                isprime = 0;
            }
        }      
        if(isprime){
        printf("%d ", i);
        }  
    }
    
    return 0;
}
//4.13
#include <stdio.h>
#include <math.h>
int main(){
    int i, number, sum = 0;
    printf("Please enter a number: ");
    scanf(" %d", &number);
    for (i = 0; i <= number; i++)
    {
        sum += i;
    }
    printf("sum is %d\nsum of the square is %.2f\nsum of the cubes is %.2f\n", sum, pow(sum,2), pow(sum,3));
    
    return 0;
}
//Factorials
#include <stdio.h>
int main(){
    int i, fact=1;
    for (i = 1; i <= 5; i++)
    {
        fact *= i;
        printf("%d! \t %d\n", i, fact);
    }    
}
//Modified Compound-Interest Program
#include <stdio.h>
int main(){
    float principal, rate, interest;
    printf("Please enter loan principal: ");
    scanf("%f", &principal);
    for (rate = 5; rate <= 10; rate++)
    {
        interest = principal * rate;
        printf("Interest is in %.2f rate is %.2f\n", rate, interest);
    }
}
//Triangle-Printing program
//A
#include <stdio.h>
void main(){
    int i,j;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%s","*");
        }
        printf("\n");
    }    
}
//B
#include <stdio.h>
void main(){
    int i,j;
    for (i = 0; i <= 10; i++)
    {
        for (j = 10; j > i; j--)
        {
            printf("%s","*");
        }
        puts("");
    }    
}
//C
#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 0; i <= 10; i++)
    {
        for (k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (j = 10; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
//D
#include <stdio.h>
void main()
{
    int i, j, k;
    for (i = 0; i <= 10; i++)
    {
        for (k = 10; k > i; k--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
//Calculating Credit Limits
#include <stdio.h>
void main()
{
    int account_number, c=0;
    float credit_limit_pre, current_balance, credit_limit;
    while ( c <= 2 )
    {
        printf("Please enter your account number: ");
        scanf("%d", &account_number);
        printf("Hello %d. Please enter the credit limit before the recession: ",account_number);
        scanf("%f", &credit_limit_pre);        
        credit_limit = credit_limit_pre / 2;
        printf("Your credit limit is %.2f now.\n", credit_limit);
        printf("Please enter your current balance:");
        scanf("%f", &current_balance);
        if(current_balance > credit_limit){
            printf("Customer %d, your balances that exceed your new credit limits.\n", account_number);        
        }
        c++;
    }      
}
//Bar-Chart Printing Program
#include <stdio.h>
int main(){
    int number;    
    while (number != -1)
    {
        printf("Please enter number: (-1 to quit): ");
        scanf("%d", &number);
        for (int i = 0; i < number < 30; i++)
        {
        printf("*");
        }  
        printf("\n");
    }   
}
//Calculating Sales
#include <stdio.h>
int main(){
    int product_number, number;
    float retail_price, quantity = 0;
    printf("Please enter the product number(-1 to quit): ");
    scanf("%d", &product_number);
    while (product_number != -1)
    {
        printf("Please enter the number of product number which you want to buy: ");
        scanf("%d", &number);
        switch (product_number)
        {
        case 1:
            retail_price = 2.98;
            quantity += retail_price*number;
            break;
        case 2: 
            retail_price = 4.50;
            quantity += retail_price*number;
            break;
        case 3:
            retail_price = 9.98;
            quantity += retail_price*number;
            break;
        case 4:
            retail_price = 4.49;
            quantity += retail_price*number;
            break;
        case 5:
            retail_price = 6.87;
            quantity += retail_price*number;
            break;
        default:
            break;
        }
        printf("Please enter the product number(-1 to quit): ");
        scanf("%d", &product_number);
    }
    printf("Total retail value of all products sold is %.2f", quantity);
    
}
//ASCII Values
#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 127; i++)
    {
       if (i % 11)
        {
            printf("%c", i);
        }
        else
        {
            printf("\n");
        }
    }
}
//Average Grade
#include <stdio.h>
int main()
{
    int aCount = 0, bCount = 0, cCount = 0, dCount = 0, fCount = 0, sum = 0;
    printf("Enter the letter grades.");
    printf("Enter the EOF character to end input.\n");
    int grade = 0;
    float num_average = 0;
    while ((grade = getchar()) != EOF)
    {
        switch (grade)
        {
        case 'A':
        case 'a':
            aCount++;
            break;
        case 'B':
        case 'b':
            bCount++;
            break;
        case 'C':
        case 'c':
            cCount++;
            break;
        case 'D':
        case 'd':
            dCount++;
            break;
        case 'F':
        case 'f':
            fCount++;
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            printf("Incorrect letter grade entered.\n");
            printf("Enter a new grade.\n");
            break;
        }
    }
    printf("Totals for each letter grade are: ");
    printf("A: %d\n", aCount);
    printf("B: %d\n", bCount);
    printf("C: %d\n", cCount);
    printf("D: %d\n", dCount);
    printf("F: %d\n", fCount);
    sum = (aCount*90 + bCount*80 + cCount*70 + dCount*60 + fCount*50);
    num_average = sum/(aCount+bCount+cCount+dCount+fCount);
    printf("Numerical average approximately is: %.2f", num_average);
}
//Calculating the Campound Interest with Integers
#include <stdio.h>
#include <math.h>
int main(){
    double principal = 1000.0, rate = 0.05;
    printf("Year\t\tAmount on deposit\n");
    for (int year = 1; year <= 10; ++year)
    {
        double amount = principal * pow(1.0 + rate,  year);
        int Cent = (int)(amount*100) % 100;
        int Dollar = (int)(amount);
        printf("%d\t\t%d Dollar %d Cent\n", year, Dollar, Cent);
    }
    return 0;
}
//Table of Octal and Hexadecimal Equivalents
#include <stdio.h>

int main()
{
    int i;
    printf("Decimal\tBinary\t\tOctal\tHexadecimal\n");
    for (i = 1; i <= 256; i++)
    {
        printf("%d\t", i);
        printf("%d%d%d%d%d%d%d%d\t", (i/256) % 2, (i / 128) % 2, (i / 64) % 2, (i / 32) % 2, (i / 16) % 2,
               (i / 8) % 2, (i / 4) % 2, (i / 2) % 2, i % 2);
        printf("%o\t", i);
        printf("%X\n", i);
    }
    return 0;
}
//Calculating the Value of pi
#include <stdio.h>

int main()
{
    int i = 0;
    float index = 1;
    float pi = 0;
    int counter = 0;
    while (1)
    {
        if (i % 2 == 0)
            pi += 4 / index;
        else
            pi += 4 / index * -1;

        if (counter == 0 && pi >= 3.14 && pi <= 3.149)
        {
            printf("3.14 came in %dth term: %.f\n", i, pi);
            counter++;
        }
        if (counter == 1 && pi >= 3.141 && pi <= 3.1419)
        {
            printf("3.141 came in %dth term: %f\n", i, pi);
            counter++;
        }
        if (counter == 2 && pi >= 3.1415 && pi <= 3.14159)
        {
            printf("3.1415 came in %dth term: %f\n", i, pi);
            counter++;
        }
        if (counter == 3 && pi >= 3.14159 && pi <= 3.141599)
        {
            printf("3.14159 came in %dth term: %f", i, pi);
            break;
        }
        i++;
        index += 2;
    }
    return 0;
}
//Pythagorean Triples
#include <stdio.h>
int main(){
    int a, b, c;
    for (a = 1; a < 500 ; a++)
    {
        for (b = 0; b <= a ; b++)
        {
            for (c = 1; c <= b; c++)
            {
                if (a*a == b*b + c*c)
                {
                    printf("%d--%d--%d \tis a pythagorean Triple.\n", c, b, a);
                }
                
            }
            
        }
        
    }
    
}
//Calculating Weekly Pay
#include <stdio.h>
int main(){
    int employe, hours, commission, product;
    float salary;
    printf("Please enter a pay code(-1 to quit): ");
    scanf("%d", &employe);
    while (employe != -1)
    {
        switch (employe)
        {
        case 1:
            //manager salary
            salary = 5000;
            printf("Managers weekly salary is %.2f\n",salary);
            break;
        case 2:
            //hourly workers
            printf("Please enter the total work hours in a week: ");
            scanf("%d", &hours);
            salary = 40 * 200;
            if (hours <= 40)
            {
                printf("Hourly workers (%d hours worked.) weekly salary is %.2f\n",hours, salary);
            }
            else{
                salary += (hours-40)*100;
                printf("Hourly workers (%d hours worked.) weekly salary is %.2f\n",hours, salary);
            }
            break;
        case 3:
            //commission workers
            printf("Please enter the gross weekly sales: ");
            scanf("%d", &commission);
            salary = 250 + commission*5.7;
            printf("Comission workers (5.7 of their gross weekly sales.) weekly salary is (in %d commision entered) %.2f\n", commission, salary);
            break;
        case 4:
            //pieceworkers
            printf("Please enter the total product number: ");
            scanf("%d", &product);
            salary = product * 50;
            printf("Piece workers (%d product produced) weekly salary is %.2f\n", product, salary);
            break;
        default:
            break;
        }
        printf("Please enter a pay code(-1 to quit): ");
        scanf("%d", &employe);
       }
    return 0;
}
//Diamond-Printing Program
#include <stdio.h>
void main()
{
    int i, j, k, l, m, n, p;
    for (i = 0; i <= 5; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        for (l = 0; l < i ; l++)
        {
           printf("*");
        }
        printf("\n");
    }
    for (i = 0; i <= 5; i++){
        for (m = 0 ; m <= i ; m++)
        {
            printf(" ");
        }
        for (n = 4 ; n >= i ; n--)
        {
            printf("*");
        }
        for (p = 3 ; p >= i; p--)
        {
            printf("*");
        }     
        printf("\n");
    }
}
//Roman-Numeral Equivalent of Decimal Values
#include <stdio.h>
void main()
{
    int number;
    printf("Please enter the number to see the Roman-numeral equivalents: ");
    scanf("%d", &number);
    while (number > 0)
    {
        if (number == 100)
        {
            printf("C");
            number -= 100;
        }
        else if (number >= 90)
        {
            printf("XC");
            number -= 90;
        }
        else if (number >= 50)
        {
            printf("L");
            number -= 50;
        }
        else if (number >= 40)
        {
            printf("XL");
            number -= 40;
        }
        else if (number >= 10 )
        {
            printf("X");
            number -= 10;
        }
        else if (number >= 9)
        {
            printf("IX");
            number -= 9;
        }
        else if (number >= 5)
        {
            printf("V");
            number -= 5;
        }
        
        else if (number >= 4)
        {
            printf("IV");
            number -= 4;
        }
        else if (number >= 1)
        {
            printf("I");
            number -= 1;
        }
    }
}
//The twelve days of christmas song
#include <stdio.h>
int main() {
    int day;
    // iterate through each day
    for (day = 1; day <= 12; day++) {
        printf("On the ");
        // switch statement to print the day
        switch (day) {
            case 1:
                printf("first");
                break;
            case 2:
                printf("second");
                break;
            case 3:
                printf("third");
                break;
            case 4:
                printf("fourth");
                break;
            case 5:
                printf("fifth");
                break;
            case 6:
                printf("sixth");
                break;
            case 7:
                printf("seventh");
                break;
            case 8:
                printf("eighth");
                break;
            case 9:
                printf("ninth");
                break;
            case 10:
                printf("tenth");
                break;
            case 11:
                printf("eleventh");
                break;
            case 12:
                printf("twelfth");
                break;
        }
        printf(" day of Christmas my true love gave to me:\n");
        // switch statement to print the remainder of each verse
        switch (day) {
            case 12:
                printf("Twelve drummers drumming,\n");
            case 11:
                printf("Eleven pipers piping,\n");
            case 10:
                printf("Ten lords a-leaping,\n");
            case 9:
                printf("Nine ladies dancing,\n");
            case 8:
                printf("Eight maids a-milking,\n");
            case 7:
                printf("Seven swans a-swimming,\n");
            case 6:
                printf("Six geese a-laying,\n");
            case 5:
                printf("Five golden rings,\n");
            case 4:
                printf("Four calling birds,\n");
            case 3:
                printf("Three French hens,\n");
            case 2:
                printf("Two turtle doves,\nAnd ");
            case 1:
                printf("A partridge in a pear tree.\n");
                break;
        }
    }
    return 0;
}

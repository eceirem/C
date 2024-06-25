#include <stdio.h>
//Sales Tax
int main(){
    char month[20];
    float amount, sales, county_tax, state_tax;
    printf("Enter total amount collected(-1 to quit.): ");
    scanf("%f", &amount);
    while (amount != -1)
    {
        printf("Enter name of month: ");
        scanf("%s", month);
        county_tax = (5*amount)/100.0;
        state_tax = (4*amount)/100.0;
        sales = amount - (county_tax + state_tax);
        printf("Total Collections: %.2f\n", amount);
        printf("Sales: %.2f\n", sales);
        printf("County Sales Tax: %.2f\n", county_tax);
        printf("State Sales Tax Collected: %.2f\n", state_tax),
        printf("Total Sales Tax Collected: %.2f\n\n", county_tax + state_tax);
        printf("Enter total amount collected(-1 to quit.): ");
        scanf("%f", &amount);
    }    
    return 0;
}
//Mortgage Calculator
#include <stdio.h>
#include <stdlib.h>
int main()
{
   float m_amount, m_term, i_rate, i_payable, monthly_payable;
   printf("Enter mortgage amount in dollars (-1 to quit): ");
   scanf("%f", &m_amount);
   while (m_amount != -1)
   {
      printf("Enter Mortgage term: (in years): ");
      scanf("%f", &m_term);
      printf("Enter Interest rate: ");
      scanf("%f", &i_rate);
      i_payable = i_rate * m_amount;
      monthly_payable = (i_payable/m_term)/12;
      printf("The Monthly Payable Interest is: %.2f\n\n", monthly_payable);
      printf("Enter mortgage amount in dollars (-1 to quit): ");
      scanf("%f", &m_amount);
   }   
   return 0;
}
//Sales-Commission Calculator
#include <stdio.h>
int main(){
   float sales, salary;
   printf("Enter sales in dollars (-1 to end): ");
   scanf("%f", &sales);
   while (sales != -1)
   {
      salary = 200 + (sales*9)/100;
      printf("Salary is: %.2f\n", salary);
      printf("Enter sales in dollars (-1 to end): ");
      scanf("%f", &sales);
   }
}
//Interest Calculator
#include <stdio.h>
int main(){
    float loan_p, interest_rate, term, interest_charge;
    printf("Enter loan principal(-1 to end): ");
    scanf("%f", &loan_p);
    while (loan_p != -1)
    {
        printf("Enter interest rate: ");
        scanf("%f", &interest_rate);
        printf("Enter term of the loan in days: ");
        scanf("%f", &term);
        interest_charge = (loan_p * interest_rate * term)/365;
        printf("The interest charge is %.2f\n", interest_charge);
        printf("Enter loan principal(-1 to end): ");
        scanf("%f", &loan_p);     
    }    
}
//Salary Calculator
#include <stdio.h>
int main(){
    int work_hour;
    float rate, salary;
    printf("Enter employees of hours worked (-1 to end): ");
    scanf("%d", &work_hour);
    while (work_hour != -1)
    {
        printf("Enter hourly rate of the worket ($00.00): ");
        scanf("%f", &rate);
        if(work_hour<=40){
            salary = work_hour*rate; 
        }
        else{
            salary = 40*rate + ((rate*1.5)*(work_hour-40));
        }
        printf("Salary is %.2f\n", salary);
        printf("Enter employees of hours worked (-1 to end): ");
        scanf("%d", &work_hour);
    }    
}
//Preincrementing vs Postincrementing
#include <stdio.h>
int main(){
    int x = 0;
    printf("%d is x's value.\n",x);
    printf("Preincrementing result = %d\n", ++x);
    printf("Postincrementing result is = %d\n", x++);
    printf("Now x is %d\n", x);
}
//Checking if a number is prime
#include <stdio.h>
#include <stdbool.h>
int main(){
    int x, n = 2;
    bool control = true;
    printf("Please enter a number: ");
    scanf("%d", &x);
    while (control && n <= x/2)
    {
        if(x % n == 0){
            control = false;
        }
        n++;
    }
    if(control){
        printf("This number is a prime number.");
    }
    else{
        printf("This number is not a prime number.");
    }       
    return 0;    
}
//Find the Largest Number
#include <stdio.h>
int main(){
    int counter = 0, number, largest = 0;
    printf("Please enter number: ");
    scanf("%d", &number);
    largest = number;
    while (counter < 10)
    {
        if(number > largest){
            largest = number;
        }
        counter++;
        printf("Please enter number: ");
        scanf("%d", &number);
    }   
    printf("The largest unmber is: %d", largest);
}
//Tabular Output 1
#include <stdio.h>
int main(){
    int x , n = 1;
    printf("Please enter a number to see their powers until the number: ");
    scanf("%d", &x);
    printf("N\tN^2\tN^3\tN^4\n");
    while (n <= x)
    {
        printf("%d\t%d\t%d\t%d\n",n, n*n,n*n*n,n*n*n*n);
        n++;
    }    
}
//Tabular Output 2
#include <stdio.h>
int main(){
    int x , n ;
    printf("Please enter a number to see their addes (3,6,9) until the number: ");
    scanf("%d", &x);
    printf("N\tN+3\tN+6\tN+9\n");
    n = x;
    while (n <= x*5)
    {
        printf("%d\t%d\t%d\t%d\n", n, n + 3 , n + 6 , n + 9);
        n = n + x;
    }    
}
//Find the Two Largest Numbers
#include <stdio.h>
int main(){
    int number, second_largest, largest, counter = 0;
    printf("Please enter the number: ");
    scanf("%d,", &largest);
    printf("Please enter the number: ");
    scanf("%d", &second_largest);
    counter = 2;
    while (counter < 10)
    {
        printf("Please enter the number: ");
        scanf("%d", &number);
        if (number > largest)
        {
            if(largest > second_largest)
                second_largest = largest;
            largest = number;
        }
        else if(number > second_largest)
        {
            second_largest = number;
        }
        counter++;
    }
    printf("Largest number is = %d\nSecond largest number is = %d", largest, second_largest);
    return 0;
}
//Validating User Input
#include <stdio.h>
int main(){
    int x, y, i = 1, power = 1, result, counter = 1;
    printf("Please enter the number: ");
    scanf("%d", &x),
    printf("Please enter the power of number: ");
    scanf("%d", &y);
    while (i <= y)
    {
        power *= x;
        i++;
    }    
    printf("Please enter the result: ");
    scanf(" %d", &result);
    while (result != power)
    {
        printf("False. Please try again.\n");
        printf("Enter the result: ");
        scanf(" %d", &result);
        counter++;
    }
    printf("Correct answer. Congrats! You found the true result in %d times.\n", counter);
    printf("%d^%d = %d", x, y, result);
}
//what does the following program print?
#include <stdio.h>
int main(void){
    int count = 1;
    while (count <= 10)
    {
        puts((count % 2) ? "****" : "++++++++");
        ++count;
    }    
}
//What does the following program print?
#include <stdio.h>
int main(void){
    int outer_count = 1;
    while (outer_count <= 10)
    {
        int inner_count = 1;
        while (inner_count <= outer_count)
        {
            printf("* ");
            inner_count++;
        }
        printf("\n");
        outer_count++;
    }    
}
//Another Dangling-Else Problem
#include <stdio.h>
//a şıkkı:
int main(){
    int x = 5 , y = 8;
    if(y==8)
    if(x==5)
    puts("@@@@@");
    else
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");    
}
//b şıkkı:
int main(){
    int x = 5 , y = 8;
    if(y==8)
    if(x==5)
    puts("@@@@@");
    else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");    
    }
}
//c şıkkı:
int main(){
    int x = 5 , y = 8;
    if(y==8)
    if(x==5)
    puts("@@@@@");
    else{         // 2. if e ait olduğu için sadece x in değerinin denetiminde.
    puts("#####");
    puts("$$$$$");
    }
    puts("&&&&&");    
}
//d şıkkı: 
int main(){
    int x = 5 , y = 7;
    if(x==5)
    if(y==8)      //x ve y değerlerinin yerini değiştirdim çünkü indentation olmadan yapıyoruz.
    puts("@@@@@");
    else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");    
    }    
}
//Square of Asteriks
#include <stdio.h>
int main(){
    int width, length, c_w = 0, c_l = 0;
    printf("Please enter width: ");
    scanf("%d", &width);
    printf("Please enter the length: ");
    scanf("%d", &length);
        while (c_l <= length)
        {
            while (c_w <= width)
            {
                printf("* ");
                c_w++;
            }
            c_w = 0;
            c_l++;
            printf("\n");
        }
}
//Hollow Square of Asteriks
#include <stdio.h>
int main(){
    int width, length, c_w = 0, c_l = 0;
    printf("Please enter width: ");
    scanf("%d", &width);
    printf("Please enter the length: ");
    scanf("%d", &length);
        while (c_l <= length)
        {
            while (c_w <= width)
            {
                if(c_l == 0 || c_l == length){
                    printf("*");
                    c_w++;
                }
                else if (c_w == 0 || c_w == width)
                {
                    printf("*");
                    c_w++;
                }
                else{
                    printf(" ");
                    c_w++;
                }               
            }
            c_w = 0;
            c_l++;
            printf("\n");
        }
}
//Floyd's Triangle
#include <stdio.h>
int main(){
    int row, l_counter = 0, w_counter = 0;
    printf("Please enter the number of Floyd's triangle lines: ");
    scanf("%d", &row);
    while (l_counter <= row)
    {
        l_counter++;
        while (w_counter < l_counter)
        {
            printf("*");
            w_counter++;
        }        
        w_counter = 0;
        printf("\n");
    }    
}
//Printing the Decimal number Equivalent of a binary number
#include <stdio.h>
#include <math.h>
int main(){
    int BinaryNumber, DecimalNumber, TempNumber, counter = 0, i = 0;
    printf("Please enter the binary number: ");
    scanf("%d", &BinaryNumber);
    TempNumber = BinaryNumber;
    while (TempNumber != 0)
    {
        TempNumber /= 10;
        counter++;
    }
    TempNumber = BinaryNumber;
    while (i < counter)
    {
        DecimalNumber += (TempNumber%10) * pow(2,i);
        TempNumber /= 10;
        i++;
    }
    printf("%d is binary number. In decimal number value is %d", BinaryNumber, DecimalNumber);
    return 0;
}
//Armstrong Numbers
#include <stdio.h>
int main(){
    int a = 0, b = 0, c = 0, num = 100;
    while(num<999)
    {
        a = num / 100;
        b = (num % 100)/10;
        c = (num % 100) % 10;
        if (a*a*a + b*b*b + c*c*c == num)
        {
            printf("%d\n", num);
        }
        else{
            printf("");
        }
        num++;
    }
}
//Detecting Multiples of a Number
#include <stdio.h>
int main(){
    int counter = 0, num = 500;
    while (counter <= num)
    {        
        if(counter % 50 == 0){
            printf("\n");
        }
        else{
            printf("$");
        }
    counter++;
    }
}
//Counting 9s.
#include <stdio.h>
int main(){
    int number, counter9 = 0, a=0,b=0,c=0,d=0,e=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    while (number != 0)
    {
        a = number % 10;
        number = number - a;
        if(a == 9)
            counter9++;
        b = (number % 100)/10;
        number = number - b*10;
        if(b == 9)
            counter9++;
        c = (number % 1000)/100;
        number = number - (c*100);
        if(c == 9)
            counter9++;
        d = (number % 10000)/1000;
        number = number -(d*1000);
        if(d == 9)
            counter9++;
        e = (number % 100000)/10000;
        number = number - (e*10000);     
        if(e == 9)
            counter9++;
    }
    printf("Entered number %d many 9s in digits.", counter9);
}
//Checkerboard Pattern of Asterisks
#include <stdio.h>
int main()
{
    int line, c = 1, c2 = 1;
    printf("Please enter the number of lines: ");
    scanf("%d", &line);
    while (c <= line)
    {
        while (c2 <= line)
        {
            if (c % 2 != 0)
            {
                printf("%s", "* ");
            }
            else
            {
                printf("%s", " *");
            }
            c2++;
        }
        c2 = 0;
        c++;
        printf("%s", " ");
        puts("");
    }
}
//Multiples of 3 with an Infinite Loop
#include <stdio.h>
int main(){
    int num = 3;
    while (num>0)
    {
        num += 3;
        printf("%d ", num);
    }   
}
//Diameter, Circumference and Area of a Circle
#include <stdio.h>
int main(){
    double r, R = 0, circumference = 0, area = 0, pi = 3.14159;
    printf("Please enter the radius of a circle: ");
    scanf( "%lf", &r);
    while (r != -1)
    {
        R = 2*r;
        circumference = 2 * pi * r;
        area = pi* r * r;
        printf("Diameter = %lf\nCircumference = %lf\nArea = %lf\n", R, circumference, area);
        printf("Please enter the radius of a circle: ");
        scanf( "%lf", &r);
    }   
}
//What's the wrong with the following statement?
#include <stdio.h>
int main(void){
    int x= 3, y=4, num= 0;
    num = x*y;
    printf("%d", --num);//x*y nin değeerini mi 1 azaltalım, x in değerini bir azaltıp mı çarpalım karmaşası var.
}
//Sides of a Triangle
#include <stdio.h>
#include <math.h>
int main(){
    int x, y, z, c=0;
    printf("Please enter three nonzero integers: ");
    scanf("%d %d %d", &x, &y, &z);
    if(abs(x-y)<z<x+y){
        c++;
    }
    if(abs(x-z)<y<x+z){
        c++;
    }
    if(abs(y-z)<x<z+y){
        c++;
    }
    if (c == 3)
    {
        printf("They could represent the sides of a tiangle.");
    }
    else{
        printf("They could not represent the sides of a triangle.");
    }
    
}
//Sides of a Right Triangle
#include <stdio.h>
#include <math.h>
int main(){
    int x, y, z, c=0;
    printf("Please enter three nonzero integers: ");
    scanf("%d %d %d", &x, &y, &z);
    if(abs(x-y)<z<x+y){
        c++;
    }
    if(abs(x-z)<y<x+z){
        c++;
    }
    if(abs(y-z)<x<z+y){
        c++;
    }
    if(x*x + y*y == z*z || z*z + y*y == x*x || x*x + z*z == y*y ){
        c++;
    }
    if (c == 3)
    {
        printf("They could represent the sides of a tiangle.");
    }
    else if(c == 4){
        printf("They could represent the sides of a right triangle.");
    }
    else{
        printf("They could not represent the sides of a triangle.");
    }    
}
//Fact
#include <stdio.h>
int main(){
    int fact = 1, c = 0;
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    while (number >=1)
    {
        fact = fact * number;
        number -= 1;
        c++;
    }
    printf("%d! = %d", c, fact);
}
//Estimates the constant e by using formula
int main(){
    int fact = 1, n = 1, c = 0;
    float e_last = 0, e_now = 0, diff = 0;
    while (n <= 10)
    {
        fact = fact * n;
        e_last = e_now + 1.0/fact;
        ++n;
        diff = e_last - e_now;
        e_now = e_last;
        if (diff < 0.002) //İstediğimiz hassasiyette bıraksın iterasyonu. 0.000000001 hassasiyet lazım değilse bize.
            break;
        c++;
    }
    printf("e = %.3f\n", e_last);
    printf("iteration counter is %d", c);    
}
//Computes the value of using e^x 
int main(){
    float x, numarator = 1.0, denominator = 1.0, e = 1.0;
    int n = 1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    while (n <= 5)
    {
        numarator = numarator * x;
        denominator = denominator *n;
        e = e + numarator/denominator;
        n++;
    }
    printf("e^%.2f = %.4f", x, e);
    return 0;
}
//World Population Growth
#include <stdio.h>
int main(){
    long long world_pop_now = 8000000000, world_pop_ftr=0, years=1;
    const float growth_rate = 0.1;
    printf("Years\tAnticipated Population\t\tNumerical Increase\n");
    while (years <= 10)
    {
        world_pop_ftr = (world_pop_now * growth_rate) + world_pop_now;
        printf("%d\t%lld\t\t\t%lld\n", years, world_pop_ftr, world_pop_ftr-world_pop_now);
        world_pop_now = world_pop_ftr;
        years++;
    }    
}
//Enforcing Privacy with Cryptography
//Encrypt
#include <stdio.h>
int main(){
    int number, a=0,b=0,c=0,d=0;
    printf("Enter the four-digit integers: ");
    scanf("%d", &number);    
    a = number % 10;
    number = number - a;
    b = (number % 100)/10;
    number = number - b*10;
    c = (number % 1000)/100;
    number = number - (c*100);
    d = (number % 10000)/1000;
    number = number -(d*1000);
    a = (a+7)%10;
    b = (b+7)%10;
    c = (c+7)%10;
    d = (d+7)%10;
    printf("Encrypted integer is : %d%d%d%d",b,a,d,c);
}
//Decrypt
#include <stdio.h>
int main(){
    int number, a=0,b=0,c=0,d=0;
    printf("Enter the four-digit integers: ");
    scanf("%d", &number);    
    a = number % 10;
    number = number - a;
    b = (number % 100)/10;
    number = number - b*10;
    c = (number % 1000)/100;
    number = number - (c*100);
    d = (number % 10000)/1000;
    number = number -(d*1000);
    if(a <= 5){
        a += 10;
        a -= 7;
    }
    else{
        a -= 7;
    }
    if(b <= 5){
        b += 10;
        b -= 7;
    }
    else{
        b -= 7;
    }
    if(c <= 5){
        c += 10;
        c -= 7;
    }        
    else{
        c -= 7;
    }
    if(d <= 5){
        d += 10;
        d -= 7;
    }
    else{ 
        d -= 7;
    }
    printf("Decrypted integer is : %d%d%d%d", b, a, d, c);
}
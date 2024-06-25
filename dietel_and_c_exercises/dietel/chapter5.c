//5.9 Car Rental Services
#include <stdio.h>
float calculateCharges(int hours);
int main(){
    float total = 0;
    float charge = 0.0;
    int hours1 = 12, hours2 = 34, hours3 = 48, total_hours = hours1+hours2+hours3;
    printf("Car\tHours\tCharge\n");
    for (int i = 1; i < 4; i++)
    {        
        switch (i)
        {
        case 1:
            charge = calculateCharges(hours1);
            total += charge;
            printf("%d\t%d\t%.2f\n", i, hours1, charge);
            break;
        case 2:
            charge = calculateCharges(hours2);
            total += charge;
            printf("%d\t%d\t%.2f\n", i, hours2, charge);            
            break;
        case 3:
            charge = calculateCharges(hours3);
            total += charge;
            printf("%d\t%d\t%.2f\n", i, hours3, charge);            
            break;
        }       
    }   
    printf("TOTAL\t%d\t%.2f", total_hours, total);
    return 0;
}
float calculateCharges(int hours){
    float serviseTax = 0.5;
    int day = 0;
    float charge_per_day = 50;
    float min_fee = 25;
    float charge = 0;
    charge += hours*serviseTax;
    if (hours > 48)
    {
        day = 3;
        charge += charge_per_day*3;
    }
    else if (hours > 24)
    {
        day = 2;
        charge += charge_per_day*2;
    }
    else if (hours == 24)
    {
        day = 1;
        charge += charge_per_day;
    }    
    else if (8 < hours && hours < 24)
    {
        charge += (hours - 8) * 5 + min_fee;
    }
    else{
        charge += min_fee;
    }
    return charge;   
}
//5.10 Rounding Numbers
#include <stdio.h>
int rounding(float x);
int main(){
    float x;
    scanf("%f", &x);
    if (rounding(x))
    {
        printf("Number = %f \t Rounded Number = %d", x, (int)x+1);
    }
    else{
        printf("Number = %f \t Rounded Number = %d", x, (int)x);
    }    
}
int rounding(float x){
    if ((int) (x + 0.5) > (int) x)
    {
        return 1;
    }
    else{
        return 0;
    }    
}
//5.13-5.14 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(NULL));
    printf("%d", ((rand()%5)+1)*6); //3 6 9 12 --- 30 arasından rastgele birini bassın.
}
int main(){
    srand(time(NULL));
    printf("%d", rand()%15 - 3); // -3<=n<=11 aralığı
}
int main(){
    srand(time(NULL));
    printf("%d", (rand()%10)*2 +1); // 3,5,7---19 arasından seç 
}
int main(){
    srand(time(NULL));
    printf("%d", (rand()%7)*5 + 3); // 3,8,13--33 arasından seç
}
//Hypotenuse Calculations
#include <stdio.h>
#include <math.h>
double hypotenuse(double side1,double side2);
int main(){
   double side1 = 0, side2 = 0;
   scanf("%lf %lf", &side1, &side2);
   printf("Side1\tSide2\tHypotenuse\n");
   printf("%.2lf\t%.2lf\t%.2lf", side1,side2,hypotenuse(side1, side2));
   return 0;
}
double hypotenuse(double side1, double side2){
    return sqrt(pow(side1,2)+pow(side2,2));
}
//Sides of  a Triangle and Area
#include <stdio.h>
#include <math.h>
double area_triangle(double side1,double side2, double side3);
int main(){
    double area;
   double side1 = 0, side2 = 0, side3 = 0;
   scanf("%lf %lf %lf", &side1, &side2, &side3);
   area =  area_triangle(side1, side2, side3);
   if (area != 0)
   {
        printf("Side1\tSide2\tSide3\tArea\n");
        printf("%.2lf\t%.2lf\t%.2lf\t%.2f", side1,side2, side3, area);
   }
   else{
        printf("This is not a triangle!");
   }
   return 0;
}
double area_triangle(double side1, double side2, double side3){
    if (abs(side1-side2) < side3 && side3 < side1+side2 && abs(side1-side3) < side2 && side2 < side1+side3 && abs(side3-side2) < side1 && side1 < side3+side2)
    {
        double u = (side1+side2+side3)/2;
        return sqrt(u*(u-side1)*(u-side2)*(u-side3));
    }
    else{
        return 0;
    }
}
//5.17 Sides of Right-Triangle
#include <stdio.h>
int right_triangle(int a, int b, int c){
    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
    {
        return 1;
    }
    return 0;
}
int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);
    if(right_triangle(a,b,c)){
        printf("This Triangle is Right-Triangle.");
    }
    else{
        printf("This Triangle is not Right-Triangle.");
    }
    return 0;
}
//Even or Odd
#include <stdio.h>
int is_Even(int x){
    if (x%2==0)
    {
        return 1;
    }
    return 0;    
}
int main(){
    int x;
    scanf(" %d", &x);
    if (is_Even(x))
    {
        printf("This number is even.");
    }
    else{
        printf("This number is odd.");
    }
    return 0;
}
//Displaying a Rectangle of Any Character
#include <stdio.h>
void fillCharacter(int a, int b, char c){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%c", c);
        }      
        puts("");
    }
}
int main(){
    int a,b;
    char c;
    printf("Please enter the sides of rectangle: ");
    scanf(" %d%d", &a, &b);
    printf("Please enter the character: ");
    scanf(" %c", &c);
    fillCharacter(a,b,c);
}
//5.22-Separating Digits
#include <stdio.h>
#include <math.h>
void Separating_Digits(int number);
int main(void){
    int number = 0;
    printf("Please enter the number : ");
    scanf(" %d", &number);
    Separating_Digits(number);
}
void Separating_Digits(int number){
    int temp = number;
    int digit = 0;
    while (temp)
    {
        digit++;
        temp /= 10;
    }
    int CurrentNum = 0;    
    while (digit != 0)
    {
        CurrentNum =  number / pow(10, digit - 1);
        printf("%d  ", CurrentNum); //4321 % 1000 gibi
        number = number - (CurrentNum * pow(10, digit - 1));
        digit--;
    }   
    
}
//5.23 -Time in Seconds
#include <stdio.h>
int timeToSecond(int hour, int min, int sec);
int timeDifference(int starthour,int startmin, int startsec, int endhour, int endmin, int endsec);

int main(){
    
    int starthour, startmin, startsec, endhour, endmin, endsec;

    printf("Please enter the start time (hour.min.sec): ");
    scanf(" %d %d %d", &starthour, &startmin, &startsec);


    printf("Please enter the end time (hour.min.sec): ");
    scanf(" %d %d %d", &endhour, &endmin, &endsec);

    
    printf("The time difference in seconds is: %d\n",timeDifference(starthour, startmin, startsec, endhour, endmin, endsec));
    return 0;
}

int timeToSecond(int hour, int min, int sec){

    return (hour*3600 + min*60 + sec); 

}
int timeDifference(int starthour,int startmin, int startsec, int endhour, int endmin, int endsec){
    int endTime = timeToSecond(endhour, endmin, endsec);
    int startTime = timeToSecond(starthour,startmin,startsec);    

    while (endTime < startTime)
    {
        endTime += 12 * 3600; // Aralarında eğer 12 lik saat farkı varsa pozitif olana kadar eklerim.
                            // Mesela 23.12.47 ile 01.49.56 girildiyse yaklaşık 2.5 saat var ama burada - oluyor.
    }

    int difference =  endTime - startTime;

    return difference; 
}
//5.24 Currency Conversion
#include <stdio.h>

float UsdToYen(int amount_usd);
float UsdToEuro(int amount_usd);
int main(){
    int amount_usd;
    float toYenCurreny = 118.87;
    float toEuroCurrency = 0.92;
    printf("Please enter the amount dollar for Yen and Euro equivalent: ");
    scanf(" %d", &amount_usd);

    printf("%16s%14s\n", "Euro", "Yen");
    printf("1 %s %13.3f %12.3f\n", "USD", toYenCurreny ,toEuroCurrency);
    printf("%d USD %10.3f %17.3f ", amount_usd, UsdToEuro(amount_usd), UsdToYen(amount_usd));

}

float UsdToYen(int amount_usd){
    return (amount_usd * 118.87); //Kur fiyatı 
}
float UsdToEuro(int amount_usd){
    return (amount_usd * 0.92); //Kur fiyatı 
}
//5.25 Find the maximum
#include <stdio.h>

float findMax(float x, float y, float z, float t);

int main(){
    float x,y,z,t;
    printf("Please enter the four floating numbers: ");
    scanf(" %f %f %f %f", &x, &y, &z, &t);
    
    printf("The largest number in these is: %f", findMax(x,y,z,t));
}

float findMax(float x, float y, float z, float t){
    float largest = x;
    if (y > largest)
    {
        largest = y;
    }
    if (z > largest)
    {
        largest = z;
    }
    if (t > largest)
    {
        largest = t;
    }
    
    return largest;
}
//5.26 Perfect-Number
#include <stdio.h>
int isFactor(int x);
int main(){
    int x = 1;
    /*printf("Please enter the number to check the perfect number or not: ");
    scanf(" %d", &x);
    if(x == isFactor(x)){
        printf("This is a perfect number.");
    }
    else
    {
        printf("This is not a perfect number.");
    }
    */
    while (x <= 1000)
    {
        if (x == isFactor(x))
        {
            printf("%d ", x);
        }     
        x++;
    }

    return 0;   
    
}
int isFactor(int x){
    int sum = 0;
    for (int i = 1 ; i < x ; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }        
    }    
    return sum;
}
//5.27 Roots of a Quadratic Equation
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Please enter the coefficients (ax^2+bx+c): ");
    scanf("%d %d %d", &a, &b, &c);
    float discriminant;
    discriminant = (b*b - 4*a*c);
    int root1, root2;
    if (discriminant >= 0)
    {
        printf("The roots are real.");
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);     
        printf("This equation roots are: %d %d", root1, root2);
    }
    else
    {
        printf("The roots are imaginary.");
        root1 = (-b + sqrt(-discriminant)) / (2 * a);
        root2 = (-b - sqrt(-discriminant)) / (2 * a); 
        printf("This equation roots are: %di %di", root1, root2);
    }   
    
    return 0;   
    
}
//5.28 Sum of Digits

#include <stdio.h>
int sumOfDigits(int x);
int main(){
    int x;
    printf("Please enter the number: ");
    scanf(" %d", &x);

    printf("Sum of digits is: %d", sumOfDigits(x));
    return 0;   
    
}
int sumOfDigits(int x){
    int sum = 0;
    int temp = x;
    while (temp > 0)
    {
        sum += temp % 10;  //sağdan ilk basamağı burada alırım 
        temp /= 10;  //sağdan ilk basamağı aldığım için kaydırabilirim
    }
    return sum;   
}
//5.29-Lowest Common Multiple
#include <stdio.h>
int LCM(int x, int y);
int main(){
    int x, y;
    printf("Please enter two number to find lowest common multiple number: ");
    scanf(" %d %d", &x, &y);
    printf("Tne lcm number is: %d", LCM(x, y));
    return 0;
}
int LCM(int x, int y){
    int lcm;
    int min;
    if (x < y)
    {
        min = x;
    }    
    else
    {
        min = y;
    }   
    
    for (int i = 1 ; i < min + 1; i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            lcm = i;
        }        
    }
    return lcm;
}
//5.30
#include <stdio.h>
int toQualityPoints(int average);
int main(){
    int average;    
    printf("Please enter the average: ");
    scanf(" %d", &average);
    printf("Quality point is: %d", toQualityPoints(average));
    return 0;
}
int toQualityPoints(int average){
    int quality;
    if (average >= 90)
    {
        quality = 4;    
    }
    else if (average >= 80)
    {
        quality = 3;
    }
    else if (average >= 70)
    {
        quality = 2;
    }
    else if (average >= 60)
    {
        quality = 1;
    }
    else
    {
        quality = 0;
    }
    return quality;
}
//5.31 Coin-Tossing
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int coin = 0, counter = 0;
    int coin_tossing = 0;
    int heads_counter = 0;
    int tails_counteer = 0;
    printf("How many times do you want to toss the coin? ");
    scanf("%d", &coin_tossing);
    srand(time(NULL));
    while (counter < coin_tossing)
    {
        coin = rand() % 2;
        if (coin)
        {
            heads_counter++;
        }
        else
        {
            tails_counteer++;
        }
        counter++;
    }
    printf("%d times heads came, %d times tails came\n", heads_counter, tails_counteer);
    
    float x = (float)(100.0 / coin_tossing);
    printf("%d times coin tossed and %%%.2f tails and %%%.2f heads", coin_tossing, (float)(tails_counteer * x), (float)(heads_counter * x));
    return 0;
}
//5.32-5.33
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, counter = 0;
    srand(time(NULL));
    number = (rand() % 1000) + 1;
    printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.");
    while (1)
    {
        number = (rand() % 1000) + 1;
        scanf("%d", &guess);
        counter++;
        while (guess != number)
        {
            if (number < guess)
            {
                printf("Too high. Try again.\n");
                scanf(" %d", &guess);
                counter++;
            }
            else if (guess < number)
            {
                printf("Too low. Try again.\n");
                scanf(" %d", &guess);
                counter++;
            }                        
        }
        if (counter < 10)
        {
            printf("Either you know the secret or you got lucky!\n");
        }
        else if (counter == 10)
        {
            printf("Aha! You know the secret!\n");
        }
        else
        {
            printf("You should be able to do better!\n");
        }        
        printf("Would you like to play again (y or n)? ");

        char choice;
        scanf(" %c", &choice);
        if (choice == 'n')
        {
            break;
        }
    }

    return 0;
}
//5.34 Recursiv3 Exponentiation
#include <stdio.h>
int power(int base, int exponent);
int main(){
    int base, exponent;
    printf("Enter the base nd exponent: ");
    scanf(" %d %d", &base, &exponent);

    int result = power(base, exponent);
    printf("The result is : %d", result);

    return 0;
}

int power(int base, int exponent){
    int result;
    if (exponent == 1)
    {
        result = base;
    }
    else if (exponent > 1)
    {
        result = power(base, exponent - 1) * base;
    }
    return result;
    
}

//Fibonacci
#include <stdio.h>
int Fibo(int nth_num);
int main(){
    printf("Please enter the nth number in fibo: ");
    int nth_num;
    scanf(" %d", &nth_num);
    Fibo(nth_num);

    return 0;
}

int Fibo(int nth_num){
    int counter = 0;
    unsigned long long int num1 = 0, num2 = 1, temp;
    while (counter < nth_num)
    { 
        printf("Fibo(%d) = %llu\n", counter, num1);
        temp = num2;
        num2 = num1;
        num1 = temp + num2;
        
        counter++;
    }
    return num2;
}
//5.36

#include <stdio.h>

void disklariTasi(int diskSayisi, int kaynak, int hedef, int gecici) {
    if (diskSayisi == 1) {
        printf("%d -> %d\n", kaynak, hedef);
        return;
    }

    disklariTasi(diskSayisi - 1, kaynak, gecici, hedef);
    printf("%d -> %d\n", kaynak, hedef);
    disklariTasi(diskSayisi - 1, gecici, hedef, kaynak);
}

int main() {
    int diskSayisi;
    printf("Disk sayisini girin: ");
    scanf("%d", &diskSayisi);

    printf("Diskleri tasiyacak talimatlar:\n");
    disklariTasi(diskSayisi, 1, 3, 2);

    return 0;
}

//5.39
#include <stdio.h>

int findGcd(int x, int y);

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, findGcd(num1, num2));

    return 0;
}

int findGcd(int x, int y) {
    if (y == 0) {   // EBOB bitti
        return x;
    } else {
        return findGcd(y, x % y);   // recursive çağrı
    }
}
//5.40
#include <stdio.h>

int main() {
    static int count = 1;  // Static local variable

    printf("Count: %d\n", count);
    count++;

    main();  // Recursive call to main function

    return 0;
}
//5.41
#include <stdio.h>
int isPrime(int num, int x)
{
    while (x < num)
    {
        if ((num % x) == 0)
        {
            return 0;
        }
        return isPrime(num, x + 1);
    }
    return 1;    
}
//5.42
#include <stdio.h>
int main(void)
{
    int c = '\0';
    if ((c = getchar()) != EOF)
    {
        main();
        printf(" %c", c);
    }    
}
//5.43-5.44
#include <stdio.h>

int mystery(int a, int b); // function prototype

int main(void) {
    printf("%s", "Enter the integers: ");
    int x = 0; // first integer
    int y = 0; // second integer
    scanf("%d%d", &x, &y);
    printf("The result is %d\n", mystery(x, y));
} 
// Parameter b must be a positive integer
// to prevent infinite recursion
int mystery(int a, int b) {
    if( b <= 0){
        return 0;
    }
    if (1 == b) {
    return a;
    } 
    else { // recursive step
    return a + mystery(a, b - 1);
    } 
} 

int main()
{
    int num;
    printf("Please enter the number: ");
    scanf(" %d", &num);
    if (isPrime(num, 2))
    {
        printf("This number is prime.");
    }
    else
    {
        printf("This number is not prime.");
    }

    return 0;
}
//5.43
#include <stdio.h>

int mystery(int a, int b); // function prototype

int main(void)
{
    printf("%s", "Enter two positive integers: ");
    int x = 0; // first integer
    int y = 0; // second integer
    scanf("%d%d", &x, &y);

    printf("The result is %d\n", mystery(x, y));
}

int mystery(int a, int b)
{
    // base case
    if (1 == b)
    {
        return a;
    }
    else
    { // recursive step
        return a + mystery(a, b - 1);
    }
}

//5.49-5.53 arası hepsi var
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAnswer(int check);              // mesajları random şekilde bastırmak için yeni fonksiyon
int askQuestion(int level, int operator); // randomu çağırıp soru soracak ve olması gereken doğru cevabı return edecek. Level ı kontrol edecek bbu yüzden onu argüman olarak alacak. Ayrıca hangi işlemi yaptıracağını alacak.
int isTrue(int input, int result);        // İnput alınan değer ile hesaplanan cevap karşılaştırılacak fonksiyon
int main()
{
    int input, result, check, counter_true = 0, counter_false = 0, level, operator;
    char choice;
    printf("Please enter the operation for exercise (1=addition, 2=substraction, 3=multiplication, 4=random_mixture): ");
    scanf(" %d", &operator);
    level = 1;
    if (operator == 1)
    {
        printf("Please enter the level of questions: ");
        scanf(" %d", &level);
    }
    while (1)
    {
        result = askQuestion(level, operator);
        scanf(" %d", &input);
        if (isTrue(input, result))
        {
            check = 1;
            counter_true++;
            printAnswer(check);
        }
        else
        {
            while (!(isTrue(input, result))) // sonuç true olana kadar dönecek bir döngümüz var.
            {
                check = 0;
                counter_false++;
                printAnswer(check);
                scanf(" %d", &input);
            }
            check = 1;
            printAnswer(check);
        }

        printf("Do you want new question (y or n)?: ");
        scanf(" %c", &choice);
        if (choice == 'y' || choice == 'Y')
        {
            continue;
        }
        else
        {
            break;
        }
    }

    int total = counter_false + counter_true;
    float rate = (counter_true / total);
    if ((rate * 100) >= 75)
    {
        printf("Conguratulations, you are ready to go to the next level!");
    }
    else
    {
        printf("Please ask your teacher for extra help.");
    }

    return 0;
}

int askQuestion(int level, int operator)
{
    srand(time(NULL));
    int num1, num2, result;
    switch (operator)
    {
    case 1: //toplama işlemi
        if (level == 1)
        {
            num1 = ((rand() % 9) + 1); // iki adet tek basamaklı sayıyı random şekilde oluşturuyoruz.
            num2 = ((rand() % 9) + 1);
        }
        else if (level == 2)
        {
            num1 = ((rand() % 99) + 1); // iki adet çift basamaklı sayıyı random şekilde oluşturuyoruz.
            num2 = ((rand() % 99) + 1);
        }
        result = num1 + num2; // toplamlarını result değişkenine atıyourz ve bu değeri return ediyoruz ki karşılaştırabilelim.
        printf("%d + %d = ", num1, num2);
        break;
    case 2: //çıkarma işlemi
        num1 = ((rand() % 9) + 1); // iki adet tek basamaklı sayıyı random şekilde oluşturuyoruz. 
        num2 = ((rand() % 9) + 1);
        result = num1 - num2;
        printf("%d - %d = ", num1, num2);
        break;
    case 3:        
        num1 = ((rand() % 9) + 1); // iki adet tek basamaklı sayıyı random şekilde oluşturuyoruz. 
        num2 = ((rand() % 9) + 1);
        result = num1 * num2;
        printf("%d * %d = ", num1, num2);
        break;
    case 4: 
        operator = ((rand() % 3) + 1);
        result = askQuestion(level, operator); //Yeniden çağırma işlemi yaparken eğer result değişkenine eşitlemezsen break ettiği anda case'den, result a random değer atıyor. dikkat et!!
        break;
    default:
        break;
    }
    return result;
}

int isTrue(int input, int result)
{
    if (input == result)
    {
        return 1;
    }

    return 0;
}

void printAnswer(int check)
{
    srand(time(NULL));
    int response;
    response = ((rand() % 3) + 1);
    if (check) // 1 ise doğrudur. ona göre sonuç üretecğiz
    {
        switch (response)
        {
        case 1:
            printf("Very good!");
            puts("");
            break;
        case 2:
            printf("Excellent!");
            puts("");
            break;
        case 3:
            printf("Nice work!");
            puts("");
            break;
        case 4:
            printf("Keep op the good work!");
            puts("");
            break;
        }
    }
    else
    {
        switch (response)
        {
        case 1:
            printf("No. Please try again.");
            puts("");
            break;
        case 2:
            printf("Wrong. Try once more.");
            puts("");
            break;
        case 3:
            printf("Don't give up.");
            puts("");
            break;
        case 4:
            printf("No. Keep trying");
            puts("");
            break;
        }
    }
}
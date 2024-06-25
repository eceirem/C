// 2. ünite
#include <stdio.h>
// Arithmetic
void main()
{
   int x, y;
   printf("Please enter two integers: \n");
   scanf(" %d %d", &x, &y);
   printf("The sum is = %d\n", x + y);
   printf("The product is = %d\n", x * y);
   printf("The difference is = %d\n", x - y);
   printf("The quotient (x/y) is = %.2f\n", (float)x / (float)y);
   printf("The remainder (x / y)is = %d\n", x % y);
}
// Final Velocity
void main()
{
   int u, a, t;
   printf("Please enter current velocity: \n");
   scanf(" %d", &u);
   printf("Please enter the acceleration: \n");
   scanf(" %d", &a);
   printf("Please enter the elapsed time: \n");
   scanf(" %d", &t);
   int v = u + a * t;
   int s = u * t + (a * t * t) / 2;
   printf("The final velocity is = %d\n", v);
   printf("Distance traversed is = %d\n", s);
}
// Comparing Values
void main()
{
   int c_rfall, h_rfall;
   printf("Please enter the highest rainfall ever recorded in one season for your country: \n");
   scanf("%d", &h_rfall);
   printf("Plese enter the rainfall in the current year for your country: \n");
   scanf("%d", &c_rfall);
   if (c_rfall > h_rfall)
   {
      printf("This year your country had the highest rainfall. The rainfall value is = %d\n", c_rfall);
   }
   else
   {
      printf("The rainfall value is = %d\n", h_rfall);
   }
}
// Arithmetic, Largest Value and Smallest Value
void main()
{
   int x, y, z;
   int largest, smallest;
   printf("Please enter three integers: \n");
   scanf(" %d %d %d", &x, &y, &z);
   printf("The sum is = %d\n", x + y + z);
   printf("The average is = %d\n", (x + y + z) / 3);
   printf("The product is = %d\n", x * y * z);
   if (x < y)
   {
      if (x < z)
      {
         smallest = x;
      }
      if (x > z)
      {
         smallest = z;
      }
   }
   if (y < x)
   {
      if (y < z)
      {
         smallest = y;
      }
      if (y > z)
      {
         smallest = z;
      }
   }
   if (x > y)
   {
      if (x > z)
      {
         largest = x;
      }
      if (x < z)
      {
         largest = z;
      }
   }
   if (y > x)
   {
      if (y > z)
      {
         largest = y;
      }
      if (y < z)
      {
         largest = z;
      }
   }
   printf("Smallest is %d\n", smallest);
   printf("Largest is %d\n", largest);
}
// Converting from seconds to hours, minutes and seconds
void main()
{
   int hours, minutes, seconds;
   printf("Please enter the total time elapsed in seconds, since an event occured: ");
   scanf("%d", &seconds);
   hours = seconds / 3600;
   minutes = (seconds - hours * 3600) / 60;
   seconds = ((seconds - hours * 3600) - minutes * 60);
   printf("%d:%d:%d", hours, minutes, seconds);
}
// odd or even
void main()
{
   int x;
   printf("Enter a number: ");
   scanf("%d", &x);
   if (x % 2)
      printf("This is a odd number.");
   else
      printf("This is an even number.");
}
// Multiples
void main()
{
   int x, y;
   printf("Please enter two integers: ");
   scanf("%d%d", &x, &y);
   if (x % y == 0)
      printf("The first number is a multiple of the second.");
}
// integer value of char
int main()
{
   char a;
   int b;
   printf("Enter a char: ");
   scanf("%c", &a);
   printf("Enter a int: ");
   scanf("%d", &b);
   printf("%c's value in ascii table is = %d \n", a, a);
   printf("%d's char in ascii table is = %c\n", b, b);
   return 0;
}
// summig the digits of an integer
void main()
{
   int x;
   int a, b, c, d;
   printf("enter one 4-digit number: ");
   scanf("%d", &x);
   a = x / 1000;
   b = (x % 1000) / 100;
   c = ((x % 1000) % 100) / 10;
   d = x % 10;
   printf("Result = %d", a + b + c + d);
}
// Target Heart-Rate Calculator
void main()
{
   int age;
   int max_beat, normal_beat;
   printf("Please enter your age: ");
   scanf("%d", &age);
   max_beat = ((220 - age) * 85) / 100;
   normal_beat = ((220 - age) * 50) / 100;
   printf("Maximum heart rate is %d.\nThe range of the target heart rate is %d.", max_beat, normal_beat);
}
// Sort in Ascending Order
void main()
{
   int x, y, z;
   int small, medium, large;
   printf("Enter three integers: ");
   scanf("%d %d %d", &x, &y, &z);
   if (x < y)
   {
      if (x < z)
      {
         small = x;
      }
      if (x > z)
      {
         medium = x;
      }
   }
   if (x > y)
   {
      if (x > z)
      {
         large = x;
      }
      if (x < z)
      {
         medium = x;
      }
   }
   if (y < z)
   {
      if (y < x)
      {
         small = y;
      }
      if (y > x)
      {
         medium = y;
      }
   }
   if (y > z)
   {
      if (y > x)
      {
         large = y;
      }
      if (y < x)
      {
         medium = y;
      }
   }
   if (z < x)
   {
      if (z < y)
      {
         small = z;
      }
      if (z > y)
      {
         medium = z;
      }
   }
   if (z > x)
   {
      if (z > y)
      {
         large = z;
      }
      if (z < y)
      {
         medium = z;
      }
   }
   printf("Small number is %d\nMedium number is %d\nLarge number is %d", small, medium, large);
}
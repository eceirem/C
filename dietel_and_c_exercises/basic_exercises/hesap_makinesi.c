#include <stdio.h>
#include <float.h>
int main()
{
  char operator;
  float num1, num2;
  printf("Welcome!");
  printf("Please press q to quit!\n");
  printf("Please enter the operation you want: ");
  scanf("%c", &operator);
  while (operator!= 'q')
  {
    if (operator== '+' || operator== '-' || operator== '*' || operator== '/')
    {
      printf("Please enter the number: ");
      scanf("%f", &num1);
      printf("Please enter the number: ");
      scanf("%f", &num2);
      switch (operator)
      {
      case '+':
        printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
        break;
      case '-':
        printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
        break;
      case '*':
        printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
        break;
      case '/':
        if (num2 == 0)
        {
          printf("\nDenominator cannot be 0.\n");
        }
        else
        {
          printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
        }
        break;
      }
    }
    else
    {
      printf("Please enter the right operation: ");
    }
    printf("\n-----\n");
    printf("Please press q to quit!\n");
    printf("Please enter the operation you want: ");
    scanf(" %c", &operator);
  }
  printf("Thanks for your choice. Bye!");
  return 0;
}
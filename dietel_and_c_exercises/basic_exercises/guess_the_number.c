#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandomNumber(void);
int is_Number(int random_number, int guess);
int main(void){
    int guess = 0;
    int number = RandomNumber();
    int guess_counter = 1;
    printf("Guess the number: ");
    scanf("%d", &guess);
    int loop = is_Number(number, guess);
    while (! loop)
    {
        guess_counter++;
        scanf("%d", &guess);
        loop = is_Number(number, guess);
    }
    printf("Correct!\n%d times guessed and correct result found.\nWell Done.\3",guess_counter);
}
int RandomNumber(void){
    srand(time(NULL));
    int number = (rand()%100) + 1;
    return number;
}
int is_Number(int random_number, int guess){
    while (random_number != guess)
    {
        if (guess < random_number)
        {
            printf("Too low.\nPlease try again: ");
            return 0;
        }
        else if (guess > random_number)
        {
            printf("Too much.\nPlease try again: ");
            return 0;
        }
    }
    return 1;
    
}
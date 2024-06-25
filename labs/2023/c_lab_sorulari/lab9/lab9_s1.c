#include <stdio.h>

void get_input(int size, char my_array[]);
void erase_non_digit(int size, int my_new_size, char my_array[], int my_new_array[]);

int rule_1(int size, int A[]);
int rule2(int size, int A[]);
int rule3(int size, int A[]);

int new_size = 0;
int size = 20;
int main()
{
    char my_array[size];

    int my_new_array[12];

    int counter = 0;

    while (counter < 3)
    {
        for (int i = 0; i < size; i++)
        {
            my_array[i] = " ";
        }
        get_input(size, my_array);
        erase_non_digit(size, new_size, my_array, my_new_array);
        if (rule_1(new_size, my_new_array))
        {
            if (rule2(new_size, my_new_array))
            {
                if (rule3(new_size, my_new_array))
                {
                    printf("Valid: ");
                    for (int i = 0; i < new_size; i++)
                    {
                        printf("%d", my_new_array[i]);
                    }
                }
                else
                {
                    printf("Invalid input: rule 3\n");
                    break;
                }
            }
            else
            {
                printf("Invalid input: rule 2\n");
                break;
            }
        }
        else
        {
            printf("Invalid input: must contain exactly 11 digits\n");
            
            if (counter == 2)
            {
                printf("Invalid input: exceeded maximum number of attempts\n");
            }
        }
        counter++;
        new_size = 0;
    }
}

void get_input(int size, char my_array[])
{
    for (int i = 0; i < size; i++)
    {
        my_array[i] = " ";
    }
    char input;
    int index = 0;
    scanf("%c", &input);
    while (input != '\n')
    {
        my_array[index] = input;
        index++;
        scanf("%c", &input);
    }
}
void erase_non_digit(int size, int my_new_size, char my_array[], int my_new_array[])
{
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (my_array[i] >= '0' && my_array[i] <= '9')
        {
            my_new_array[index++] = my_array[i] - '0';
        }
    }
    new_size = index;
}
int rule_1(int size, int A[])
{
    if (size == 11)
    {
        return 1;
    }
    return 0;
}
int rule2(int size, int A[])
{
    int x = 0;
    int y = 0;
    for (int i = 0; i < 9; i += 2)
    {
        x += A[i];
    }
    x *= 7;
    for (int i = 1; i < 8; i += 2)
    {
        y += A[i];
    }
    if ((x - y) % 10 == A[9])
    {
        return 1;
    }
    return 0;
}

int rule3(int size, int A[])
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += A[i];
    }
    if ((sum % 10) == A[10])
    {
        return 1;
    }
    return 0;
}
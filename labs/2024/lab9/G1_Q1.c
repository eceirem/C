#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_WORD_LENGHT 20

// kelime bilgilerini tutmak için struct

typedef struct
{
    char word[MAX_WORD_LENGHT];
} WordInfo;

void count_word_lenghts(WordInfo word_info[], int word_count);
void print_sorted_words(WordInfo word_info[], int word_count);

int main()
{
    FILE *file = fopen("input2.txt", "r");

    if (file == NULL)
    {
        printf("Dosya acilamadi, hata olustu\n");
        return 1;
    }

    WordInfo word_info[MAX_WORDS] = {0};
    int word_count = 0;
    char str[MAX_WORD_LENGHT];
    while (fscanf(file, "%s", str) != EOF)
    {
        char *token = strtok(str, " .\n");
        while (token != NULL)
        {
            strcpy(word_info[word_count].word, token);
            word_count++;
            token = strtok(NULL, " .\n");
        }
    }
    fclose(file);

    count_word_lenghts(word_info, word_count);
    print_sorted_words(word_info, word_count);
    return 0;
}

void count_word_lenghts(WordInfo word_info[], int word_count)
{
    int lenghts[MAX_WORD_LENGHT] = {0};
    for (int i = 0; i < word_count; i++)
    {
        int len = strlen(word_info[i].word);
        lenghts[len]++;
    }
    for (int i = 0; i < MAX_WORD_LENGHT; i++)
    {
        if (lenghts[i] > 0)
        {
            printf("%d kelimenin uzunlugu %d\n", lenghts[i], i);
        }
    }
}

void print_sorted_words(WordInfo word_info[], int word_count)
{
    // bubble sort
    for (int i = 0; i < word_count - 1; i++)
    {
        for (int j = 0; j < word_count - i - 1; j++)
        {
            if (strcmp(word_info[j].word, word_info[j + 1].word) > 0)
            {
                WordInfo temp = word_info[j];
                word_info[j] = word_info[j + 1];
                word_info[j + 1] = temp;
            }
        }
    }

    printf("Kelimelerin alfabetik sirali listesi:\n");
    for (int i = 0; i < word_count; i++)
    {
        printf("\"%s\"\n", word_info[i].word);
    }
}
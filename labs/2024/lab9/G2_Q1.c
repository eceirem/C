#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_WORD_LENGHT 20

typedef struct
{
    char word[MAX_WORD_LENGHT];
    int count;
} WordInfo;

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
    char combined[MAX_WORDS * MAX_WORD_LENGHT] = {0};

    while (fgets(str, sizeof(str), file) != NULL)
    {
        strcat(combined, str);
    }

    fclose(file);

    char *token = strtok(combined, " .\n");
    while (token != NULL)
    {
        int found = 0;
        // daha önce görülmüş mü kelime kontrol et.
        for (int i = 0; i < word_count; i++)
        {
            if (strcmp(word_info[i].word, token) == 0)
            {
                word_info[i].count++;
                found = 1;
                break;
            }
        }
        // eğer önce görmediysem, yeni kelime oluştur
        if (!found)
        {
            strcpy(word_info[word_count].word, token);
            word_info[word_count].count = 1;
            word_count++;
        }

        token = strtok(NULL, " .\n");
    }
    print_sorted_words(word_info, word_count);
    return 0;
}
// kelime sayılarını alfabetik sıraya göre yazdır

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
    for (int i = 0; i < word_count; i++)
    {
        printf("\"%s\" %d kere var\n", word_info[i].word, word_info[i].count);
    }
}
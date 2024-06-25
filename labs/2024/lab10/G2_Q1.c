#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char name[10], surname[10];
    float balance;
} Data;

int main()
{
    Data datas[10];
    int index = 0, id;
    float tBalance;
    FILE *ofPtr, *tfPtr, *newPtr;
    char str[50];
    int matched;
    ofPtr = fopen("oldmast.dat", "r");
    tfPtr = fopen("trans.dat", "r");
    newPtr = fopen("myoutput.txt", "w");
    // oldmast okumasını yap ve diziye aktar
    while (fgets(str, sizeof(str), ofPtr) != NULL)
    {
        sscanf(str, "%d %s %s %f", &datas[index].id, datas[index].name, datas[index].surname, &datas[index].balance);
        index++;
    }

    fprintf(newPtr, "Processing...\n");
    while (fgets(str, sizeof(str), tfPtr) != NULL)
    {
        sscanf(str, "%d %f", &id, &tBalance);
        matched = 0;
        for (int i = 0; i < index; i++)
        {
            if (id == datas[i].id)
            {
                datas[i].balance += tBalance;
                fprintf(newPtr, "%d %s %s %.2f\n", datas[i].id, datas[i].name, datas[i].surname, datas[i].balance);
                matched = 1;
                break;
            }
        }
        if (!matched)
        {
            fprintf(newPtr, "Unmatched transaction record for account %d\n", id);
        }
    }

    // tüm kayıtları 1 kez yaz
    for (int i = 0; i < index; i++)
    {
        matched = 0;
        rewind(tfPtr);
        while (fgets(str, sizeof(str), tfPtr) != NULL)
        {
            sscanf(str, "%d %f", &id, &tBalance);
            if (id == datas[i].id)
            {
                matched = 1;
                break;
            }
        }
        if (!matched)
        {
            fprintf(newPtr, "%d %s %s %.2f\n", datas[i].id, datas[i].name, datas[i].surname, datas[i].balance);
        }
    }
    fclose(ofPtr);
    fclose(tfPtr);
    fclose(newPtr);
    return 0;
}

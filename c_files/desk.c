#include <stdio.h> 

int main(){
    FILE *in;
    FILE *out;
    if ((in = fopen("myfile.txt","r")) == NULL)
    {
        printf("File cannot open!");
    }
    out = fopen("myoutput.txt", "w");
    char c;
    char *names[20];
    int vize, final;
    while (!feof(in))
    {
        c = fgetc(in);
        fscanf(in, "%s %d %d", names, &vize, &final);
        fprintf(out,"%s %d\n", names, (vize*20)/100+(final*80)/100);
    }
    fclose(in);
    fclose(out);
}
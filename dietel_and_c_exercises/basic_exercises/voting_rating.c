#include <stdio.h>
#define Vote_Size 20
#define Distribution 6
void rateLikes(const int distribution[], int size);
int main(void){
    int votes[Vote_Size] = {1,2,5,4,3,5,2,1,3,1,4,3,3,3,2,3,3,2,2,5};
    int distribution[Distribution] = {0};
    for (size_t i = 0; i < Vote_Size; i++)
    {
        distribution[votes[i]]++;
    }
    printf("%s%16s%9s\n", "Voting_Scala", "Distribution", "Chart");
    for (int i = 1; i < Distribution ; i++)
    {
        printf("%d%16d", i, distribution[i]);
        printf("\t\t");
        rateLikes(distribution, Distribution);
        puts("");
    }  
    float sum = 0;
    float like_rate = 0;
    for (int i = 0; i < Distribution; i++)
    {
        sum += distribution[i] * i;
    }
    like_rate = (sum / (Vote_Size*5))*100;
    printf("Likes rate is %.2f", like_rate);
}
void rateLikes(const int distribution[], int size){
    static int x = 1;    
    for (int i = 0; i < distribution[x] ; i++)
    {
        printf("%s","*");      
    }    
    x++;        
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
enum Shape {rock, paper, scissors};
enum GameStatus {Continue, Game_Won, Game_Lost};
enum RoundStatus {Draw, Won, Lost};
enum Shape computerPlayRandomShape(void);
enum RoundStatus getRoundStatus(enum Shape, enum Shape);
enum Shape convertIntToShape(int);
char* getStringFromShape(enum Shape);
int main(void){
    srand(time(NULL));
    enum GameStatus gamestatus = Continue;
    int playerWinCount = 0;
    int computerWinCount = 0;
    int drawcount = 0;
    int roundNum = 1;
    int winThreshold = 3;
    while (gamestatus == Continue)
    {
        printf("==============\nRound %d \n==============\n", roundNum++);
        printf("Enter 0 (Rock) or 1 (Paper) or 2 (Scissors): ");
        int playerShapeInt;
        scanf(" %d", &playerShapeInt);
        enum Shape playerShape = convertIntToShape(playerShapeInt);
        enum Shape computerShape = computerPlayRandomShape();
        enum RoundStatus roundstatus = getRoundStatus(playerShape, computerShape);
        switch (roundstatus)
        {
        case Draw:
            printf("It's a DRAW!\n");
            drawcount++;
            break;
        case Won:
            printf("Player WON!\n");
            playerWinCount++;
            if (playerWinCount == winThreshold){
                gamestatus = Game_Won;
            }           
            break;
        case Lost:
            printf("Player LOST!\n");
            computerWinCount++;
            if(computerWinCount == winThreshold){
                gamestatus = Game_Lost;
            }
            break;        
        }
    }
    switch (gamestatus)
    {
    case Game_Won:
        printf("*********\n");
        printf("Player WON this game!\n");
        printf("*********\n");
        printf("Round\tWins\tDraws\tLoses\n");
        printf("%d\t%d\t%d\t%d",roundNum - 1, winThreshold, drawcount, computerWinCount);
        break;
    case Game_Lost:
        printf("*********\n");
        printf("Computer WON this game!\n");
        printf("*********\n");
        printf("Round\tWins\tDraws\tLoses\n");
        printf("%d\t%d\t%d\t%d",roundNum - 1, winThreshold, drawcount, playerWinCount);
        break;
    case Continue:
    default:
        printf("Error! Should not reach here!");
    }
}
enum Shape computerPlayRandomShape(void){
    enum Shape randomshape = convertIntToShape(rand()%3);
    printf("Computer played %s\n", getStringFromShape(randomshape));
    return randomshape;
}
enum RoundStatus getRoundStatus(enum Shape playerShape, enum Shape computerShape){
    if (playerShape == computerShape)
    {
        return Draw;
    }
    else if(playerShape == rock && computerShape == scissors || playerShape == scissors && computerShape == paper || playerShape == paper && computerShape == rock){
        return Won;
    }
    else{
        return Lost;
    }
}
enum Shape convertIntToShape(int shapeValue){
    return (enum Shape) shapeValue;
}
char* getStringFromShape(enum Shape shape){
    switch (shape)
    {
    case rock:
        return "ROCK";
    case scissors:
        return "SCISSORS";
    case paper:
        return "PAPER";
    }
    return "";
}

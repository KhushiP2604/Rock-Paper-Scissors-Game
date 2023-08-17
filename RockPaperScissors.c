/*
Name : Khushi Pawecha
Enrollment no. - 22/10/JC/065

 "ROCK PAPER SCISSORS GAME"
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

//defining constants for rock paper and scissors
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

int main()
{
    srand( time(NULL) );
    int Your_throw = 0;
    int ai_throw = 0;
    bool draw = false;

    do{
        printf("****************************************************************************\n");
        printf("HELLO @ Let's Play Rock Paper Scissors....\n\nSelect Your Throw\n\n");
        printf("1) Rock\n");
        printf("2) Paper\n");
        printf("3) Scissors\n\n");
        printf("****************************************************************************\n");
        printf("Make a move : \n");
        scanf("%d", &Your_throw);
        //Randomly generate the Ai Throw..
        ai_throw= (rand() % 3) + 1;
        //Output the Ai's Throw to the Player...
        if(ai_throw == ROCK)
            printf("\nAI Throws Rock!!\n");
        else if(ai_throw == PAPER)
            printf("\nAI Throws Paper!!\n");
        else if(ai_throw == SCISSORS)
            printf("\nAI Throws Scissors!!\n");
        //To find the Winner...
        draw=false;
        if (Your_throw == ROCK && ai_throw==SCISSORS)
            printf("\nROCK beats SCISSORS. You WIN \n\n");
        else if (Your_throw== ROCK && ai_throw == PAPER)
            printf("\nPAPER beats ROCK . You LOSE \n\n");
        else if (Your_throw==SCISSORS &&  ai_throw== PAPER)
            printf("\nSCISSORS beats PAPER. You WIN. \n\n");
        else if (Your_throw== SCISSORS && ai_throw==ROCK)
            printf("\nROCK beats SCISSORS. You LOSE. \n\n");
        else if (Your_throw==PAPER && ai_throw==ROCK)
            printf("\nPAPER beats ROCK. You WIN. \n\n");
        else if (Your_throw==PAPER && ai_throw==SCISSORS)
            printf("\nSCISSORS beats PAPER. You LOSE. \n\n");
        else{
        //when both Ai And Player throw the same then it's a draw...
            printf("\nDRAW!! Let's Play Again. \n\n");
            draw = true;
        } 
        //in case of a Draw, the game is played again until there's a Winner
    
    }while(draw);
        return 0;

}
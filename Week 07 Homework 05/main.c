/******************************************************************************

Ayden Avila
Week 07 Homework 05

Have any number of players (as a pointer) who shall roll six dice
Have the winner be whoever rolls the highest sum of the face value of six dice
Have three functions: one to roll the dice, another function to play this game, 
and the main that just calls the play the game function

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int rollDice();
int play(int);

int main()
{
    srand(time(NULL));
    int numPlayers;
    printf("Enter the number of players? ");
    scanf("%d",&numPlayers);
    play(numPlayers);
    return 0;
}

int rollDice() {
    int dice = 0;
    for (size_t q = 0; q <= 5; q++) {
        int die = 1 + (rand() % 6);
        dice = dice + die;
    }
    return dice;
}

int play(int numPlayers) {
    int users[numPlayers];
    int *usersPtr = users;
    int player = 0;

    for (size_t q = 0; q < numPlayers; q++) {
        usersPtr[q] = rollDice();
        printf("Player %ld sum: %d\n", q + 1, usersPtr[q]);
    }
    for (size_t x = 0; x < numPlayers; x++) {
        if (*(usersPtr + 0) < *(usersPtr + x)) {
            *(usersPtr + 0) = *(usersPtr + x);
            player = x;
        }
    }
    printf("The highest sum first rolled is: %d by player %d.\n", *(usersPtr + 0), player + 1);
}


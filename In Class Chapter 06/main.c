/******************************************************************************

Ayden Avila
In Class Chapter 06
-Define a 2-dimensional array of 5 players who roll a dice 1,000,000 times
-Keep a histogram per player (number times each dice face value occurs after 1,000,000 rolls) of dice face values
-Ask the user which player they would like to see the results
-Display to the screen the desired player histogram.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int nPlayers;
int histoGram;

int main()
{
    srand(time(NULL));
    printf("How many players are there? ");
    scanf("%d", &nPlayers);
    
    if (nPlayers >= 6) {
        printf("Please input 5 players at maximum.");
    printf("How many players are there? ");
    scanf("%d", &nPlayers);
    } else if (nPlayers <= 0) {
        printf("Please input a viable number.");
    printf("How many players are there? ");
    scanf("%d", &nPlayers);
    }
    
    int pDice[nPlayers][6];
    for (int i = 0; i < nPlayers; i++) {
        for (int j = 0; j < 6; j++) {
            pDice[i][j] = 0;
        }
    }
    
    nPlayers--;
    for (size_t people = 0; people <= nPlayers; people++) {
        for (size_t countRoll = 0; countRoll < 1000000; countRoll++) {
            size_t dice = 1 + rand() % 6;
            if (dice == 1) {
                pDice[people][0]++;
            } else if (dice == 2) {
                pDice[people][1]++;
            } else if (dice == 3) {
                pDice[people][2]++;
            } else if (dice == 4) {
                pDice[people][3]++;
            } else if (dice == 5) {
                pDice[people][4]++;
            } else if (dice == 6) {
                pDice[people][5]++;
            }
        }
    }
    nPlayers++;
    
    printf("Which player do you want to see the histogram of? ");
    scanf("%d", &histoGram);

    if (histoGram > nPlayers || histoGram < 0) {
        printf("There are not %d players, please enter a lower number.\n", histoGram);
        printf("Which player do you want to see the histogram of? ");
        scanf("%d", &histoGram);
    } else if (histoGram == 0) {
        printf("Ending Code.");
        return 0;
    } else {
    int pGram = histoGram - 1;
    printf("Player %d rolled a 1 %d times.\n", histoGram, pDice[pGram][0]);
    printf("Player %d rolled a 2 %d times.\n", histoGram, pDice[pGram][1]);
    printf("Player %d rolled a 3 %d times.\n", histoGram, pDice[pGram][2]);
    printf("Player %d rolled a 4 %d times.\n", histoGram, pDice[pGram][3]);
    printf("Player %d rolled a 5 %d times.\n", histoGram, pDice[pGram][4]);
    printf("Player %d rolled a 6 %d times.\n", histoGram, pDice[pGram][5]);
    }
    
    return 0;
}


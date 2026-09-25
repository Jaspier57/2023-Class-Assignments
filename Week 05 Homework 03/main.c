/******************************************************************************

Ayden Avila
Week 05 Homework 03
-Have two players rolling a dice
-Have the winner be whoever rolls the highest face value dice
-Have three functions: one to roll the dice, another function to play this game, 
and the main that just calls the play the game function

*******************************************************************************/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int rollDice ();
int playGame ();

int
main ()
{
  char startGame;
  srand (time (NULL));

  printf ("Start Game? y/n: ");
  scanf ("%c", &startGame);

  if (startGame == 'y' || startGame == 'Y')
    {
      playGame ();
    }
  else if (startGame == 'n' || startGame == 'N')
    {
      return 0;
    }

  return 0;
}

int
rollDice ()
{
  int die = 1 + (rand () % 6);
}

int
playGame ()
{
  int die = rollDice ();
  int die2 = rollDice ();
  printf ("Player 1 rolled a %d\n", die);
  printf ("Player 2 rolled a %d\n", die2);
  if (die > die2)
    {
      printf ("Player 1 wins the game!");
    }
  else if (die < die2)
    {
      printf ("Player 2 wins the game!");
    }
  else if (die == die2)
    {
      printf ("A Tie! You should play again ;).\n");
    }
}

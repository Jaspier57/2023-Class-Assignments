/******************************************************************************
Ayden Avila
Week 08 Homework 06

Read from the keyboard a person's first name and last name (separated by a single space).
Display to the screen the reverse of the person's name
Display the swap of the first name and last name

Enter a sentence up to 80 characters with spaces? Ali Najem
-mejaN ilA
-Najem Ali
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80

void reverseName (char *phrasePtr);
void switchNames (char *phrasePtr);

int a = 0, b = 0;
int d;

int
main (void)
{
  char phrase[SIZE];
  printf ("Enter a first and last name up to 80 characters with spaces: ");
  fgets (phrase, SIZE, stdin);
  reverseName (phrase);
  printf ("\n");
  switchNames (phrase);
}

void
reverseName (char *phrasePtr)
{
  if ('\0' == phrasePtr[0])
    {
      return;
    }
  else
    {
      reverseName (&phrasePtr[1]);
      putchar (phrasePtr[0]);
    }
}

void
switchNames (char *phrasePtr)
{
  d = SIZE;
  for (a = d - 1; a >= 0; a--)
    {
      if (phrasePtr[a] == ' ')
	{
	  for (b = a + 1; b < d; b++)
	    printf ("%c", phrasePtr[b]);
	  d = a;
	  printf (" ");
	}
      if (a == 0)
	{
	  for (b = 0; b < d; b++)
	    printf ("%c", phrasePtr[b]);
	}
    }
}

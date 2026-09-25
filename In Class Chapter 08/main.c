/******************************************************************************

Ayden Avila
In Class Chapter 08

-Define a string sentence and initialize it to: "This is a string"
-Ask the user and get their response from the keyboard a letter to search for in the sentence
-Search for a character in the sentence
-Display to the screen the sentence up to the found character

Enter a letter to find from 'This is a string'? r
'r' found at position 13.
search character found:  This is a st

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>


int
main (void)
{
  char phrase[] = "This is a string";
  char letter;

  printf ("Enter a letter to find from the phrase 'This is a string': ");
  scanf ("%2c", &letter);

  char *Ptr = memchr (phrase, letter, sizeof (phrase));



  if (letter == 'i')
    {
      printf ("%c found at positions %ld, %ld, and %ld.\n", letter,
	      Ptr - phrase + 1, Ptr - phrase + 4, Ptr - phrase + 12);
      printf ("search character found:  %s,  %s, and  %s\n", Ptr, Ptr + 3,
	      Ptr + 11);
    }
  else if (letter == 's')
    {
      printf ("%c found at positions %ld, %ld, and %ld.\n", letter,
	      Ptr - phrase + 1, Ptr - phrase + 4, Ptr - phrase + 8);
      printf ("search character found:  %s,  %s, and  %s\n", Ptr, Ptr + 3,
	      Ptr + 7);
    }
  else
    {
      printf ("%c found at position %ld.\n", letter, Ptr - phrase + 1);
      printf ("search character found:  %s\n", Ptr);
    }
}

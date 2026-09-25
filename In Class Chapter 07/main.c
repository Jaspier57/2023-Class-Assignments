/******************************************************************************

Ayden Avila
In Class Chapter 07

->Read from the keyboard a sentence string (without spaces)
->Convert every other character to uppercase while converting the other characters to lower case

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

void convertToUppercase (char *sentencePtr);

int
main (void)
{
  char sentence[80];
  printf ("Enter a sentence up to 80 characters (without spaces): ");
  scanf ("%80s", sentence);
  printf ("Your sentence is %s.\n", sentence);
  convertToUppercase (sentence);
  printf ("Your new sentence is %s.", sentence);
}

void
convertToUppercase (char *sentencePtr)
{
  while (*sentencePtr != '\0')
    {
      *sentencePtr = toupper (*sentencePtr);
      ++sentencePtr;
      *sentencePtr = tolower (*sentencePtr);
      ++sentencePtr;
    }
}

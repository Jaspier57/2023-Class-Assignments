/******************************************************************************

Ayden Avila
In Class Chapter 09

Read from the keyboard time format with the ":" characters or the "-" character
Display to the screen the hour, minutes, and seconds separately

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int hour;
  int minute;
  int second;
  printf ("Enter a time in the form hh-mm-ss : ");
  scanf ("%d%*c%d%*c%d", &hour, &minute, &second);
  printf ("hour = %d minute = %d second = %d\n\n", hour, minute, second);

  printf ("Enter a time in the form hh:mm:ss : ");
  scanf ("%d%*c%d%*c%d", &hour, &minute, &second);
  printf ("hour = %d minute = %d second = %d\n\n", hour, minute, second);
  return 0;
}

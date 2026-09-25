/******************************************************************************

Ayden Avila
In Class Chapter 10

Ask the user to enter their birthday as mm-dd-yyyy
Convert the decimal month to a string name
Display to the screen the month day and year of your birthday

*******************************************************************************/
#include <stdio.h>

enum months
{ JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int
main (void)
{
  const char *monthName[] = { "", "January", "February", "March",
    "April", "May", "June", "July", "August", "September", "October",
    "November", "December"
  };
  int month;
  int day;
  int year;

  printf ("Enter your birthday in mm-dd-yyyy: ");
  scanf ("%d%*c%d%*c%d", &month, &day, &year);

  for (enum months x = JAN; x <= DEC; ++x)
    {
      if (month == x)
	{
	  printf ("Your birthday is: %s %d, %d", monthName[x], day, year);
	}
    }
}

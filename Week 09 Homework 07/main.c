/******************************************************************************

Ayden Avila
Week 09 Homework 07

Print 1234 right-justified in a 10-digit field.
Print 123.456789 in exponential notation with a sign (+ or -) and 3 digits of precision.
Print 100 in octal form preceded by 0.
Use integer variables x and y to specify field width and precision used to display the double value 1234.56789.

12345678901234567890123456789012345678901234567890
      1234
1.234e+03  == 123.456789
144
1234.567890000000034
*******************************************************************************/
#include <stdio.h>

int
main (void)
{
  int x;
  int y;
  printf ("12345678901234567890123456789012345678901234567890");
  printf ("%10d\n", 1234);
  printf ("%.3e\n", -123.456789);
  printf ("%o\n", 100);
  printf ("%*.*f\n", x, 15, 1234.56789);
}

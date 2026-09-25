/******************************************************************************
-Create a program that reads the user’s birthday and the current day 
(each consisting of the month, day, and year). 
-Your program should calculate and display the person’s age (in years), the person’s
maximum heart rate, and the person’s target heart rate range.
-the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years
-our target heart rate is a range that’s 50–85% of your maximum heart rate. 
*******************************************************************************/
#include <stdio.h>

int main()
{
    double birthMonth;
    double birthDay;
    double birthYear;
    double currentMonth;
    double currentDay;
    double currentYear;
    double age;
    double maxRate;
    double minRange;
    double maxRange;
    
    printf("Please enter your date of birth (MM DD YYYY) - ");
    scanf("%lf", & birthMonth);
    scanf("%lf", & birthDay);
    scanf("%lf", & birthYear);
    
    printf("Please enter the current date (MM DD YYYY) - ");
    scanf("%lf", & currentMonth);
    scanf("%lf", & currentDay);
    scanf("%lf", & currentYear);
    
    if (currentMonth >= birthMonth && currentDay >= birthDay) {
        age = currentYear - birthYear;
    } else {
        age = (currentYear - birthYear) - 1;
    }
    
    maxRate = 220 - age;
    minRange = maxRate * 0.50;
    maxRange = maxRate * 0.85;
    
    printf("Your age is - %.0f years\n", age);
    printf("Your Maximum Heart rate - %.0f beats per minute\n", maxRate);
    printf("Your Target Heart rate range - %.0f - %.0f beats per minute\n", minRange, maxRange);
    
    return 0;
}


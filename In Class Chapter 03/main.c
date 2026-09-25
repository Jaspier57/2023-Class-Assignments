
#include <stdio.h>

int main()
{
    unsigned int counter;
    double grade;
    double total;
    double AVG;
    
    total = 0;
    counter = 1;
    
    printf("%s", "Enter a test score? ");
    scanf("%lf", &grade);
    total = total + grade;
    
    while (grade > 0) {
        printf("%s", "Enter a test score? ");
        scanf("%lf", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    if (grade < 0) {    
        grade = grade * -1;
        total = total + grade;
        counter = counter - 1;
        AVG = total / counter;
        printf("The class average is: %0.2f", AVG);
    }
    return 0;
}

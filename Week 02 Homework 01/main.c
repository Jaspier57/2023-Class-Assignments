/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    puts("Ayden Avila");
    puts("C Programming");
    puts("Homework #01");
    
    double num1;
    double num2;
    double num3;
    double all;
    double average;
    
    printf("Please enter three test scores: \n");
    scanf("%lf", & num1);
    scanf("%lf", & num2);
    scanf("%lf", & num3);
    
    all = num1 + num2 + num3;
    average = all / 3;
    
    printf("The average is %.2f.\n", average);
    printf("The three test scores were: %.0f, %.0f, and %.0f.\n", num1, num2, num3);

    return 0;
}



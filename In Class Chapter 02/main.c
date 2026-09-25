/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    puts("Welcome to my program!");
    
    double num1;
    double num2;
    double num3;
    
    printf("Please enter three numbers: \n");
    scanf("%lf", & num1);
    scanf("%lf", & num2);
    scanf("%lf", & num3);
    
    printf("%.0f %.0f %.0f\n", num1, num2, num3);

    if (num1 == num2 && num1 == num3) {
        printf("They are all the same.");
    } else if (num1 > num2 && num1 > num3) {
        printf("%.0f is the biggest number.", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("%.0f is the biggest number.", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("%.0f is the biggest number.", num3);
    } else if (num1 == num2 && num1 > num3) {
        printf("%.0f is the biggest number.", num1);
    } else if (num1 == num3 && num1 > num2) {
        printf("%.0f is the biggest number.", num1);
    } else {
        printf("%.0f is the biggest number.", num2);
    }

    return 0;
}





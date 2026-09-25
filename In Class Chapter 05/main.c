/******************************************************************************

Ayden Avila
In Class Chapter 5

Ask the user to enter an integer number, n
calculate the sum of numbers from 1 to n using recursion
Display the sum to the screen

*******************************************************************************/
#include <stdio.h>
#include <time.h> 
#include <stdlib.h>

int nInput;
int addInput(int);

int main()
{
    printf("Enter the value of n? ");
    scanf("%d", &nInput);
    printf("The sum of numbers from 1 to %d: %d", nInput, addInput(nInput));
    return 0;
}

int addInput(int n) {
        if (n != 0) {
            return n + addInput(n - 1); } 
        else {
            return n;
        }
    }




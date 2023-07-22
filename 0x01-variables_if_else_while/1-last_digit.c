#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable 'n'
 * each time it is executed and prints the last digit of the number with
 * additional information based on its value.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    /* Seed the random number generator */
    srand(time(0));

    /* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
    n = rand() - RAND_MAX / 2;

    /* Get the last digit of n using the modulo operator */
    int lastDigit = abs(n % 10); // Use abs() to handle negative numbers

    if (lastDigit > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("Last digit of %d is %d  and is 0\n", n, lastDigit);
    }
    else
    {
        printf("Last digit of %d is %d and and is less than 6 and not 0\n",n, lastDigit);
    }

    return (0);
}

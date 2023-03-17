#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number
 * to the variable n each time
 * it is executed and prints the last digit of n along with
 * a description of
 * whether it is greater than 5, less than 6 and not 0, or 0.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int n
srand(tie(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
printf("Last digit of %d is ", n);

if (last_digit > 5)
printf("%d and is greater than 5\n", last_digit);
else if (last_digit == 0)
printf("%d and is 0\n", last_digit);
else
printf("%d and is less that 6 and not 0\n", last_digit);
return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase,
 * followed by a new li * using the putchar function.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char letter = 'a';
char upper_case = 'A';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

while (upper_case <= 'Z')
{
putchar(upper_case);
upper_case++;
}

putchar('\n');
return (0);
}

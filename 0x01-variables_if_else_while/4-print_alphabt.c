#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar,
 *              but skips the letters 'e' and 'q'.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

char letter = 'a';

while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
letter++
}
putchar('\n');

return (0);
}

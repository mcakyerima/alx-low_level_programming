/**
 * main - Entry point. Multiplies two positive numbers.
 *
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 on success, or 98 on failure
 *
 * Author: Mohammed Abba
 * File: 101-mul.c
 */

#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char **argv)
{
	/* Check if the correct number of arguments is provided */
	/** and if they are positive numbers */
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	/* Call the multiply function with the two numbers */
	multiply(argv[1], argv[2]);

	return (0);
}

/**
 * multiply - Multiplies two positive numbers.
 *
 * @num1: The first number to multiply.
 * @num2: The second number to multiply.
 */
void multiply(char *num1, char *num2)
{
	/* Compute the length of the two numbers */
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);

	/* Allocate memory to hold the result of the multiplication */
	int *result, i, j, k = 0;

	result = malloc((len1 + len2) * sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	/* Initialize the result to 0 */
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	/* Multiply each digit of the first number with each digit of the second number */
	for (i = len1 - 1; i >= 0; i--)
	{
		/* Initialize the carry to 0 and compute the current digit of the first number */
		int carry = 0;
		int n1 = num1[i] - '0';

		/* Multiply the current digit of the first number with each digit of the second number */
		for (j = len2 - 1; j >= 0; j--)
		{
			/* Compute the current digit of the second number and the current sum */
			int n2 = num2[j] - '0';
			int sum = n1 * n2 + result[i + j + 1] + carry;

			/* Update the carry and the result */
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		/* If there is a carry left, add it to the previous digit */
		if (carry > 0)
			result[i + j + 1] += carry;
	}

	/* Find the first non-zero digit of the result */
	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	/* Free the memory used by the result */
	free(result);
}

/**
 * is_positive_number - Checks if a string represents a positive number.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string represents a positive number, 0 otherwise.
 */
int is_positive_number(char *s)
{
	/* Check if the string is empty */
	if (*s == '\0')
		return (0);

	/* Check if all characters are digits */
	while (*s != '\0')
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

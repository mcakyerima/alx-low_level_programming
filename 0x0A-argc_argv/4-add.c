#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * is_positive_integer - checks if string is a positive integer
 *
 * @str: string to check
 *
 * Return: 1 if str is a positive integer, 0 otherwise
 */

int is_positive_integer(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')

			return (0);
	}

	return (1);
}

/**
 * main - adds positive numbers passed as arguments
 *
 * @argc: number of arguments passed to program
 * @argv: array of strings containing arguments
 *
 * Return: 0 if successful, 1 if there was an error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_integer(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

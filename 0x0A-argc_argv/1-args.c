#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Description: This program prints the number of arguments passed to it.
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void)argv; /* unused variable */

	printf("%d\n", argc - 1);

	return (0);
}

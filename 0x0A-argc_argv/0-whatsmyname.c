#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc > 0 && argv[0])
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

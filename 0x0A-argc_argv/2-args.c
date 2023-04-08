#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives, one per line
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

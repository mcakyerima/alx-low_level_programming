/**
 * File: 100-first.c
 * Author: Mohammed AK Yerima
 * Description: A program that prints the first line of a file
 */
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the first line of the file passed as argument
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	read = getline(&line, &len, fp);
	if (read != -1)
		printf("%s", line);

	free(line);
	fclose(fp);
	return (0);
}

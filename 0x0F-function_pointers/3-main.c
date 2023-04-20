/*
 * File: 3-main.c
 * Author: Mohammed Abba.
 */

#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the result of basic operations.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the parameter arguments..
 *
 * Return: Always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/*convert para to int */
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (op[1] != '\0' || get_op_func(op) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '%' && b == 0) || (*op == '/' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}

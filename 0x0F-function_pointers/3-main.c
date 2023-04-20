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
	int first_num, second_num;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first_num = atoi(argv[1]);
	opr = argv[2];
	second_num = atoi(argv[3]);

	if (get_op_func(opr) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr == '/' && second_num == 0) ||
	    (*opr == '%' && second_num == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opr)(num1, num2));

	return (0);
}

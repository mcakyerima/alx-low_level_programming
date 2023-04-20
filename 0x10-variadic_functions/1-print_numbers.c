/*
 * File: 1-print_numbers.c
 * Author: Mohammed Abba Kaka
 *
 * Description: This file contains a function that prints numbers
 *		followed by a new line.
 *		The function takes in a variable number of arguments, where the first
 *		argument is the separator to be printed between the numbers, and the
 *		second argument is the number of integers to print.
 */


#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}


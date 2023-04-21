/*
 * File: 3-print_all.c
 * Author: [Author Name]
 * Description: This file contains a function that prints anything,
 *		based on a given format.
 */


#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - Prints a character
 * @list: A va_list pointing to the argument to print
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * print_int - Prints an integer
 * @list: A va_list pointing to the argument to print
 */
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * print_float - Prints a float
 * @list: A va_list pointing to the argument to print
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * print_string - Prints a string
 * @list: A va_list pointing to the argument to print
 */
void print_string(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Prints anything
 * @format: A list of types of arguments passed to the function
 * @...: The arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator = "";
	unsigned int i = 0, j;
	print_t p[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_start(list, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].type)
		{
			if (format[i] == p[j].type)
			{
				printf("%s", separator);
				p[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(list);
}

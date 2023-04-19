/*
 * File: 0-print_name.c
 * Decription: A function that prints a name as is
 * Author: Mohammed Abba
 */

#include "function_pointers.h"

/**
 * print_name - Prints name as it is.
 * @name: The name to be printed.
 * @f: Pointer to the function that prints the name.
 */

void print_name(char *name, void (*f)(char *))
{
	/* validate name & func */
	if (f == NULL || name == NULL)
		return;

	/* print name with pointer func */
	f(name);

}

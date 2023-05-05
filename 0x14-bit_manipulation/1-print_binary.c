/*
 * File_name: 1-print_binary.c
 * Author: Mohammed Ak Yerima.
 * Description: prints the binary representation of a number.
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int len;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (len = 0; (n >> len) != 0; len++)
		;

	for (len--; len >= 0; len--)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

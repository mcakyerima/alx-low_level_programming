/*
 * File_name: 1-print_binary.c
 * Author: Mohammed Ak Yerima.
 * Description: prints the binary representation of a number.
 */

#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned long int
 * @n: unsigned long int to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, len = 0;
	unsigned long int mask = 1;

	while (mask <= n)
	{
		len++;
		mask <<= 1;
	}

	if (!len)
	{
		_putchar('0');
		return;
	}

	mask >>= 1;

	for (i = 0; i < len; i++)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}

}

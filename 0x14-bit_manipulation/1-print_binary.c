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
	unsigned long int mask = 1;
	int shift_count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((mask << 1) <= n)
	{
		mask = (mask << 1) | 1;
		shift_count++;
	}

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}

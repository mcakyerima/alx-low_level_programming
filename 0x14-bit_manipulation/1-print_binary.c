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
	int i, len = sizeof(n) * 8;

	for (i = len - 1; i >= 0; i--)
	{
		if (n & (mask << i))
			_putchar('1');
		else if (i == 0)
			_putchar('0');
		else
			continue;
	}
}

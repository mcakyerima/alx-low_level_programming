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
	unsigned long int mask = 1, len = sizeof(n) * 8;

	while (len--)
	{
		if (n & (mask << len))
			break;
	}
	while (len--)
	{
		(n & (mask << len)) ? _putchar('1') : _putchar('0');
	}
}

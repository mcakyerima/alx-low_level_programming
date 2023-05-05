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
	unsigned long int num_copy = n, mask = 1;
	int num_len = 0;

	while (num_copy > 0)
	{
		num_len++;
		num_copy >>= 1;
	}
	num_len -= 1;

	if (num_len > 0) /* create mask based on length of num */
		mask = mask << num_len;

	while (mask > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}

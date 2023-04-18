/*
 * File: 2-main.c
 * Author: Mohammed Abba
 * Description: This program prints the name of the file it was
 * 		compiled from, followed by a new line.
 */

#include <stdio.h>

/**
 * main - Prints out the name of the file it was compiles from
 *	  followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}

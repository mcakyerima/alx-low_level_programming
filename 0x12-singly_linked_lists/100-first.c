/*
 * File: 100-first.c
 * Author: Mohammed Ak Yerima
 */

#include <stdio.h>

/**
 * before_main - prints a message before the main function is executed
 *
 * Return: void
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/*
 * File: 0-malloc_checked.c
 * Author: Mohammed Abba
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *memory_block = malloc(b);

	if (memory_block == NULL)
		exit(98);

	return (memory_block);
}

/*
 * File: 1-array_itterator.c
 * Description: executes a function given as a parameter on
 *		each element of an array.
 * Author: Mohammed Abba
 */

#include "function_pointer.h"

/**
 * array_iterator - executes a function given as a parameter on
 *		each element of an array.
 * @array: Array to be passed.
 * @size: Size of the array.
 * @action: A pointer to the function to executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* check for NULL */
	if (action == NULL || array == NULL)
		return;

	/* loop through array */
	int i;

	for (i = 0; size > i; size--)
	{
		action(*array);
		array++
	}
}

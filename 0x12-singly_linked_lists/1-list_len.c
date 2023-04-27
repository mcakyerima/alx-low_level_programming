/*
 * File: 1-list_len.c
 * Author: Mohammed Ak Yerima
 * Description: This file contains a function that
 *		returns the number of elements
 * in a linked list_t list.
 */

#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: Head node of linked list_t
 *
 * Return: Number of elements in linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

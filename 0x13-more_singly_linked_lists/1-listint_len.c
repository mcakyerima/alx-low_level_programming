/*
 * File_name: 1-listint_len.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that returns the number of elements in a
 *		listint_t list.
 */

#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns number of elements in a linked listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

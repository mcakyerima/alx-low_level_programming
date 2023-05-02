#include "lists.h"

/*
 * File_name: 1-listint_len.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that returns the number of elements in a
 *		listint_t list.

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		elements++;
		current = current->next;
	}

	return (elements);
}
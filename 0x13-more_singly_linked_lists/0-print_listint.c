/*
 * File_name: 0-print_listint.c
 * Author: Mohammed Ak Yerima
 * Description: A program that prints all the elements of a listint_t list.
 */

#include <stdio.h>
#include "lists.h"

/**
 * print_listint - Prints all the emlement of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of Nodes in the listint_t.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);

		nodes++;
		current = current->next;

	}

	return (nodes);
}

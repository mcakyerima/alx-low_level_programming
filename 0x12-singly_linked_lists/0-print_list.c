/*
 * File : 0-print_list.c
 * Author: Mohammed Ak Yerima
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t = nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			print("[%d] %s\n", h->len, h->str);

		node++;
		h = h->next;
	}

	return (nodes);
}
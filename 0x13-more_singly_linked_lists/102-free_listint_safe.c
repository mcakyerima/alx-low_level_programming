/*
 * File: 102-free_listint_safe.c
 * Author: Mohammed Abba kaka
 * Description: function that frees a listint_t list.
 */


#include "lists.h"

#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list
 *                     safely (handles loops).
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *tmp;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;
	while (current)
	{
	count++;
	tmp = current;
	current = current->next;
	free(tmp);

        /* check for loop */
	if (tmp < current)
		break;

	tmp->next = NULL;
	}

	*h = NULL;

	return (count);
}

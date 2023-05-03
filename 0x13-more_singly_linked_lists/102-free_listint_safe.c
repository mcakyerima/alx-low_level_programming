/*
 * File_name: 102-free_listint_safe.c
 * Author: Mohammed Ak Yerima
 * Description: Fuction that frees a listint_t linked list.
 */

#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely (i.e.
 *                     can free lists containing loops)
 * @h: A pointer to the address of the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
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
		tmp = current->next;
		free(current);
		current = tmp;

		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}

/*
 * File_name: 102-free_listint_safe.c
 * Author: Mohammed Ak Yerima
 * Description: Fuction that frees a listint_t linked list.
 */

#include "lists.h"


/**
 * looped_listint_count - Counts the number of unique nodes
 *                        in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *slow_ptr, *fast_ptr;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;
	fast_ptr = (head->next)->next;

	while (fast_ptr)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				count++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				count++;
				slow_ptr = slow_ptr->next;
			}

			return (count);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = (fast_ptr->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t list safely (i.e.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *        the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t count, index;

	count = looped_listint_count(*h);

	if (count == 0)
	{
		for (; h != NULL && *h != NULL; count++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}

		*h = NULL;
	}

	h = NULL;

	return (count);
}

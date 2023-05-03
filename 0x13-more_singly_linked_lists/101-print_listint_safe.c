/*
 * File_name: 101-print_listint_safe.c
 * Author: Mohammed Ak Yerima
 * Description: Function that prints a listint_t linked list.
 */

#include "lists.h"


size_t get_unique_nodes_count_in_looped_list(const listint_t *head);
size_t print_safe_listint(const listint_t *head);

/**
 * get_unique_nodes_count_in_looped_list - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t get_unique_nodes_count_in_looped_list(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t unique_node_count = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				unique_node_count++;
				tortoise = tortoise->next;
				hare = hare->next;
			}

			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				unique_node_count++;
				tortoise = tortoise->next;
			}

			return (unique_node_count);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_safe_listint - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_safe_listint(const listint_t *head)
{
	size_t node_count, index = 0;

	node_count = get_unique_nodes_count_in_looped_list(head);

	if (node_count == 0)
	{
		for (; head != NULL; node_count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node_count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node_count);
}


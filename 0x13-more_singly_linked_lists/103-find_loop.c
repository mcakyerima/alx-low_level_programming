/*
 * File_name: 103-find_loop.c
 * Author: Mohammed Ak Yerima
 * Description: Function that finds loop in a listint_t linked list.
 */

#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_runner, *fast_runner;

	if (head == NULL || head->next == NULL)
		return (NULL);

	slow_runner = head->next;
	fast_runner = head->next->next;

	while (fast_runner != NULL)
	{
		if (slow_runner == fast_runner)
		{
			slow_runner = head;

		while (slow_runner != fast_runner)
		{
			slow_runner = slow_runner->next;
			fast_runner = fast_runner->next;
		}

			return (slow_runner);
		}

		slow_runner = slow_runner->next;
		fast_runner = fast_runner->next;

		if (fast_runner != NULL)
			fast_runner = fast_runner->next;
	}

	return (NULL);
}

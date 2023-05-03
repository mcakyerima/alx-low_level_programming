/*
 * File_name: 8-sum_listint.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that summs all data in a listint_t list.
 */

#include "lists.h"


/**
 * sum_listint - Returns the sum of all the data (n) of a
 *		 listint_t linked list.
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) of the listint_t linked list.
 *         If the list is empty, return 0.
 */

int sum_listint(listint_t *head)
{

	int sum = 0;

	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;

		current_node = current_node->next;
	}

	return (sum);
}

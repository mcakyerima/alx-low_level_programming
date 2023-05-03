/*
 * File_name: 10-delete_nodeint
 * Author: Mohammed Ak Yerima
 * Description: Function that deletes node at given index of linked list.
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index of a listint_t
 *                           list.
 * @head: A pointer to the address of the head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success, returns 1. On failure, returns -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_node;
	unsigned int current_index;

	if (*head == NULL) /* check if list is empty */
		return (-1);

	if (index == 0) /* if deleting the first node */
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	current_node = *head;

	/* loop through the list until reaching the node before */
	/* the one to be deleted */
	for (current_index = 0; current_index < index; current_index++)
	{
		previous_node = current_node;
		current_node = current_node->next;

		/* if the index is out of bounds */
		if (current_node == NULL)
			return (-1);
	}

	/* delete node */
	previous_node->next = current_node->next;
	free(current_node);

	return (1);
}


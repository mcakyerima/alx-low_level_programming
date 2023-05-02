/*
 * File_name: 7-get_nodeint.c
 * Author: Mohammed Ak yerima.
 * Description: Function that returns listint_t node at given index.
 */

#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node of the list,
 *	or NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t = *current_node = head;

	unsigned int node_index = 0;

	while (current_node != NULL && node_index != index)
	{
		current_node = current_node->next;
		node_index++;
	}

	if (current_node == NULL)
		return (NULL);

	return (current_node);
}

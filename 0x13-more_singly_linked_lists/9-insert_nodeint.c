/*
 * File_name: 9-insert_nodeint.c
 * Athor: Mohammed Ak Yerima
 * Description: insert new node at given position of lisint_t.
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a
 *                           listint_t list.
 * @head: a pointer to a pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 *	Index starts at 0.
 * @n: data to be stored in the new node.
 *
 * Return: address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (i != idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}


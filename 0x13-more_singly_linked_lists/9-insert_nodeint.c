/*
 * File_name: 9-insert_nodeint.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that inserts node at given index of listint_t list.
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Pointer to a pointer to the first node of the list
 * @idx: Index of the list where the new node should be added
 * @n: Data of the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listint_t)); /*creat new_node */

	if (!new_node) /* check if malloc failed */
		return (NULL);

	new_node->n = n; /* set data for new node */

	if (idx == 0) /* if inserting at beginning */
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp_node && count < idx - 1) /* loop throgh d list*/
	{
		temp_node = temp_node->next;
		count++;
	}

	if (!temp_node || !temp_node->next) /*if index out_of_bound */
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp_node->next; /* insert new_node */
	temp_node->next = new_node;

	return (new_node);
}

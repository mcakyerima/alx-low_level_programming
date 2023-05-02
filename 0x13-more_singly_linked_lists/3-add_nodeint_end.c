/*
 * File_name: 3-add_nodeint_end.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that adds a new node at the end of a listint_t list.
 */

#include "lists.h"

/**
 * *add_nodeint_end - adds  a new node at the end of a listint_t list.
 *
 * @head: Pointer to the head of the listint_t list.
 *
 * @n: integer value to add.
 *
 * Return: Address of new element or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *new_node, *temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if head is NULL, set new_node to be head and return */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* else, traverse through list and add new_node to the end */
	temp_node = *head;

	while (temp_node != NULL)
		temp_node = temp_node->next;

	temp_node->next = new_node;

	return (new_node);
}

/*
 * File_name 2-add_nodeint.c
 * Author: Mohammed Ak yerima
 * Description: This function adds new node at the beginning of
 *		a listint_t list.
 */

#include "lists.h"

/**
 * *add_nodeint - Adds new node at the beginning of a listint_t lists.
 *
 * @head: A pointer to the head address of the linked list listint_t.
 * @n: The int value for the new node.
 *
 * Return: Upon fail - NULL.
 *	   else - the address of the new node.
 */

listint_t *add_nodeint(listint_t **head, cont int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	/* add new_node value */
	new_node->n = n;

	/* set next pointer of the new node to the current head */
	new_node->next = *head;

	/* update the head pointer to point to new_node */

	*head = new_node;

	return (new_node);
}

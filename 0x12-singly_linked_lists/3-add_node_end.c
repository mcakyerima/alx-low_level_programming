/*
 * File: 3-add_node_end.c
 * Athor: Mohammed Ak Yerima.
 */


#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A double pointer to the beginning of the list
 * @str: The string to be stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

/*
 * File_name: 100-reverse_listint.c
 * Author: Mohammed Ak Yerima
 * Description: Function that reverses a lisint_t linked list.
 */

#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of the head of the listint_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *curr_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev_node = NULL;
	curr_node = *head;

	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		curr_node->next = prev_node;
		prev_node = curr_node;
		curr_node = next_node;
	}

	*head = prev_node;

	return (*head);
}


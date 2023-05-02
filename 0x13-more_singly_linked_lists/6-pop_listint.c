/*
 * File_name: 6-pop_listint.c
 * Author: Mohmmed Ak Yerima.
 * Description: Function that deletes the head of a listint_t and
 *		returns its data.
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t and retuns its data.
 *
 * @head: Pointer to the head of the listint_t list.
 *
 * Return: 0 if linked list empty, else the poped head data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;

	int data;

	if (*head == NULL || head == NULL)
		return (0);

	temp_node = *head;
	*head = (*head)->next;
	data = temp_node->n;

	free(temp_node);

	return (data);
}

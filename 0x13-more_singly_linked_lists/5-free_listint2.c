/*
 * File_name: 5-free_listint2.c
 * Author: Mohammed Ak Yerima
 * Description: Function that frees a listint_t list.
 */

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 *
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_node = *head;
		*head = (*head)->next;
		free(temp_node);
	}

	head = NULL;
}

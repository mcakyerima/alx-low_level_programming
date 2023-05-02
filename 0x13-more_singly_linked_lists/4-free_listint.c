/*
 * File_name: 4-free_listint.c
 * Author: Mohammed Ak Yerima.
 * Decription: A function that frees a listint_t list.
 */

#include "lists.h"

/**
 * free_listint - Frees a listint_t list
 * @head: Pointer to the head node of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	/* temporary pointer to current head */
	listint_t *temp_node;

	/* set temp to head, move head to next node and free temp */
	while (head != NULL)
	{
		temp_node = head;

		head = head->next;

		free(temp_node);
	}
}

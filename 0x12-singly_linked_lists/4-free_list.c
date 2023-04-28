/*
 * File: 4-free_list.c
 * Author: Mohammed Ak Yerima
 * Description: Frees a list_t list.
 */

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head node of the list.
 *
 * Description: This function frees each node of a list_t linked list.
 *
 * Return: Nothing.
 */

#include "lists.h"

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}

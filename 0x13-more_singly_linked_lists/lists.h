#ifndef LISTS_H
#define LISTS_H

/*
 * File_name: lists.h
 * Author: Mohammed Ak Yerima
 * Description: Header file containing prototypes and definitions for all
 *		functions and types written in the 0x13-more_singly_linked_lists directory.
 */

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */


typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* all function prototypes */

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);

#endif /*END OF LISTS_h*/

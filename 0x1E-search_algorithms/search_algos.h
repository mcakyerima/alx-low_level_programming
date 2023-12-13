#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>
#include <stddef.h>
#include <stdio.h>

/**
 * struct listint_s - Struct for a sigly linked list
 * @n: Integer value of the node
 * @next: Pointer to the next node in the list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* Function prototypes */
size_t print_listint(const listint_t *h);
int linear_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */

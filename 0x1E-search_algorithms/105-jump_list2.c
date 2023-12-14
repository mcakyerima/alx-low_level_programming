#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list using
 * Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: A pointer to the first node where value is located,
 * or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t current;

	if (list == NULL || size == 0)
		return (NULL);

	printf("Value checked at index [%lu] = [%d]\n", prev, list->n);
	while (list->index < size - 1 && list->n < value)
	{
		current = prev + step;
		while (list->index < current)
		{
			list = list->next;
			if (list == NULL)
				return (NULL);
		}
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n >= value || list->index == size - 1)
			break;
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, list->index);

	while (list->index > prev && list->n > value)
	{
		list = list->next;
		if (list == NULL)
			return (NULL);
	}

	printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);

	while (list->index > prev && list->n < value)
	{
		list = list->next;
		if (list == NULL)
			return (NULL);
	}

	if (list->n == value)
		return (list);

	return (NULL);
}

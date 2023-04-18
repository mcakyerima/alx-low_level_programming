/*
 * File: 5-free_dog.c
 * Author: Mohammed Abba
 */

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees the memory allocated for a struct dog.
 *
 * @d: A pointer to the struct dog to be freed.
 *
 * Description: This function frees the memory allocated for a struct dog,
 * including the name and owner strings.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}

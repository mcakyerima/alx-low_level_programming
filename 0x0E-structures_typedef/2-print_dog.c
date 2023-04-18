/*
 * File: 2-print_dog.c
 * Author: Mohammed Abba
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);

	switch (d->owner != NULL)
	{
		case 0:
			printf("Owner: %s\n", "(nil)");
			break;
		default:
			printf("Owner: %s\n", d->owner);
			break;
	}
}

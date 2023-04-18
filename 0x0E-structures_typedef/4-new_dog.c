/*
 * File: 4-new_dog.c
 * Author: Mohammed Abba
 */

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = _strlen(name);
	owner_len = _strlen(owner);

	new_dog->name = malloc(name_len + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = malloc(owner_len + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - gets the length of a string
 *
 * @str: the string to get the length of
 *
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcpy - copies a string from source to destination
 *
 * @dest: destination buffer for string copy
 * @src: source string to copy
 *
 * Return: pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (start);
}

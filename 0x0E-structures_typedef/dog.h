#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Author: Mohammed Abba
 * Desc: A Header file that defines a new struct type dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif

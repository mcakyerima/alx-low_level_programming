/*
 * File: 1-string_nconcat.c
 * Author: Mohammed Abba
 *
 * Description:
 * A function that concatenates two strings.
 */


#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes of s2 to concatenate
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str; /* pointer to concatenated string */
	unsigned int s1_len = 0, s2_len = 0, i, j;

	/* check if s1 is NULL */
	if (s1 == NULL)
		s1 = "";

	/* check if s2 is NULL */
	if (s2 == NULL)
		s2 = "";

	/* find length of s1 */
	while (s1[s1_len])
		s1_len++;

	/* find length of s2 */
	while (s2[s2_len])
		s2_len++;

	/* if n is greater than s2_len, use s2_len */
	if (n > s2_len)
		n = s2_len;

	/* allocate memory for concatenated string */
	concat_str = malloc(sizeof(char) * (s1_len + n + 1));

	/* check if memory allocation was successful */
	if (concat_str == NULL)
		return (NULL);

	/* copy s1 to concatenated string */
	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];

	/* copy n bytes of s2 to concatenated string */
	for (j = 0; j < n; j++)
		concat_str[i + j] = s2[j];

	/* null terminate concatenated string */
	concat_str[i + j] = '\0';

	/* return pointer to concatenated string */
	return (concat_str);
}

/**
 * main - Entry point for testing.
 *
 * Return: Always 0
 */
int main(void)
{
	char *concat1, *concat2, *concat3, *concat4;

	concat1 = string_nconcat("Hello ", "World", 0);
	printf("%s\n", concat1); /* Expected output: "Hello " */

	concat2 = string_nconcat(NULL, "World", 6);
	printf("%s\n", concat2); /* Expected output: "(null)World" */

	concat3 = string_nconcat("Hello ", NULL, 5);
	printf("%s\n", concat3); /* Expected output: "Hello " */

	concat4 = string_nconcat("Hello ", "World", 3);
	printf("%s\n", concat4); /* Expected output: "Hello Wor" */

	free(concat1);
	free(concat2);
	free(concat3);
	free(concat4);

	return (0);
}

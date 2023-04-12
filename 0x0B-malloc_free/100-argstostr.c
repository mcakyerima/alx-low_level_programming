#include <stdlib.h>/
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of command line arguments
 * @av: Array of pointers to the command line arguments
 *
 * Return: Pointer to a new string containing all the arguments,
 *         separated by a newline character, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, len = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]) + 1; /* Add 1 for the newline character */

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * total_len);
	if (str == NULL)
		return (NULL);

	/* Copy each argument to the concatenated string */
	/* separated by a newline character */
	for (i = 0, j = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		memcpy(str + j, av[i], len);
		j += len;
		str[j++] = '\n'; /* Add a newline character after each argument */
	}

	str[j] = '\0'; /* Add a null terminator to the end of the string */

	return (str);
}

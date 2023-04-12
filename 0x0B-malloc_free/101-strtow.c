#include <stdlib.h>

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string.
 *
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 *
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	/* Calculate the length of the string */
	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		/* If the current character is not a space, increment words and
		 * move the index to the end of the current word */
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 *
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, letters, l;

	/* Return NULL if the string is empty or NULL */
	if (str == NULL || str[0] == '\0')
		return (NULL);

	/* Calculate the number of words in the string */
	words = count_words(str);

	/* If there are no words, return NULL */
	if (words == 0)
		return (NULL);

	/* Allocate memory for the array of strings */
	strings = malloc(sizeof(char *) * (words + 1));

	/* If malloc fails, return NULL */
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		/* Skip spaces at the beginning of the current word */
		while (str[index] == ' ')
			index++;

		/* Get the length of the current word */
		letters = word_len(str + index);

		/* Allocate memory for the current word */
		strings[w] = malloc(sizeof(char) * (letters + 1));

		/* If malloc fails, free all previously allocated memory and return NULL */
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		/* Copy the characters of the current word into the new string */
		for (l = 0; l < letters; l++)
			strings[w][l] = str[index++];

		/* Add a null terminator to the end of the new string */
		strings[w][l] = '\0';
	}

	/* Add a null pointer to the end of the array of strings */
	strings[w] = NULL;

	return (strings);
}

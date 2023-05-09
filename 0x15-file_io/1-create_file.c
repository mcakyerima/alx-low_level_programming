/*
 * File_name: 1-create_file.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that creates a file with given name and
 *		writes the specified text content to it.
 */

#include "main.h"

/**
 * create_file - Creates a file with the given name and writes the specified
 *               text content to it.
 * @filename: The name of the file to create
 * @text_content: A NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, result, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_len > 0)
	{
		result = write(fd, text_content, text_len);
		if (result == -1 || result != text_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}

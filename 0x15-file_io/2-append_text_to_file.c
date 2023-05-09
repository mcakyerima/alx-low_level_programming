/*
 * File_name: 2-append_text_to_file.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that appends text at the end of a file.
 */

#include "main.h"

/**
 * append_text_to_file - Appends the specified text content to the
 *			end of a file.
 * @filename: The name of the file to append to
 * @text_content: A NULL-terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, result, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;
	}
	else
	{
		return (1);
	}

	fd  = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	result = write(fd, text_content, text_len);

	if (result == -1 || result != text_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

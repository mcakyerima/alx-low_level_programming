/*
 * File_name: 3-cp.c
 * Author: Mohammed Ak Yerima.
 * Description: Copies the content of one file to another.
 */

#include "main.h"

#define BUF_SIZE 2024

void error(char *msg, int code);
void copy_file_contents(int fd_from, int fd_to, char *file_from,
			 char *file_to);

/**
 * error - Prints an error message to stderr and exits with a
 *		specified exit code.
 * @msg: The error message to print.
 * @code: The exit code to exit with.
 */

void error(char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s", msg);
	exit(code);
}

/**
 * copy_file_contents - Copies the contents of one file to another.
 * @fd_from: The file descriptor for the source file.
 * @fd_to: The file descriptor for the destination file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 *
 * Return: None
 */
void copy_file_contents(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buf[BUF_SIZE];
	ssize_t nread, nwritten;

	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		nwritten = write(fd_to, buf, nread);

		if (nwritten == -1 || nwritten != nread)
		{
			char msg[200];

			sprintf(msg, "Error: Can't write to %s\n", file_to);

			error(msg, 99);

		}
	}

	if (nread == -1)
	{
		char msg[200];

		sprintf(msg, "Error: Can't read from %s\n", file_from);
		error(msg, 98);
	}
}

/**
 * main - entry point for the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		error("Usage: cp file_from file_to\n", 97);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		char msg[200];

		sprintf(msg, "Error: Can't read from file %s\n", argv[1]);
		error(msg, 98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		char msg[200];

		sprintf(msg, "Error: Can't write to %s\n", argv[2]);
		error(msg, 99);
	}

	copy_file_contents(fd_from, fd_to, argv[1], argv[2]);

	if (close(fd_from) == -1)
	{
		char msg[200];

		sprintf(msg, "Error: Can't close fd %d\n", fd_from);
		error(msg, 100);
	}

	if (close(fd_to) == -1)
	{
		char msg[200];

		sprintf(msg, "Error: Can't close fd %d\n", fd_to);
		error(msg, 100);
	}

	return (0);
}

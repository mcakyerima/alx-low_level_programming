/*
 * File_name: 3-cp.c
 * Author: Mohammed Ak Yerima.
 * Description: Copies the content of one file to another.
 */

#include "main.h"
#include <fcntl.h>
#include <errno.h>

#define STDERR_FILENO 2
#define BUF_SIZE 1024

/**
 * print_usage - Prints usage instructions for the program.
 * @prog_name: The name of the program being executed.
 */

void print_usage(const char *prog_name)
{
	dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", prog_name);
}

/**
 * open_source_file - Opens the source file for reading.
 * @file_from: The name of the file to open.
 *
 * Return: The file descriptor for the opened file.
 */

int open_source_file(const char *file_from)
{
	int fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd_from);
}

/**
 * open_dest_file - Opens the destination file for writing.
 * @file_to: The name of the file to open.
 *
 * Return: The file descriptor for the opened file.
 */

int open_dest_file(const char *file_to)
{
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			 S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (fd_to);
}

/**
 * copy_file_contents - Copies the contents of one file to another.
 * @fd_from: The file descriptor for the source file.
 * @fd_to: The file descriptor for the destination file.
 *
 * Return: None
 */

void copy_file_contents(int fd_from, int fd_to)
{
	char buf[BUF_SIZE];
	ssize_t nread, nwritten;

	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		nwritten = write(fd_to, buf, nread);

		if (nwritten == -1 || nwritten != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
}


/**
 * main - entry point for the program
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char **argv)
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;

	if (argc != 3)
	{
		print_usage(argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

    /* Open source file for reading */
	fd_from = open_source_file(file_from);

    /* Open destination file for writing (truncate if already exists) */
	fd_to = open_dest_file(file_to);

    /* Copy file contents */
	copy_file_contents(fd_from, fd_to);

    /* Close file descriptors */
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

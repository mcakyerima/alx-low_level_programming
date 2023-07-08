/*
 * File_name: 100-get_endianness.c
 * Author: Mohammed Ak Yerima.
 * Description: Function that checks the endianness.
 */

#include "main.h"

/**
 * get_endianness - checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);
	else
		return (0);
}

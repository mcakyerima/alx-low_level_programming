/*
 * File: 3-get_op_func.c
 * Author: Mohammed Abba
 * Description: This file should contain the function that selects
 *		 the correct function to perform the operation asked by the user
 */

#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - Choose the appropriate function to perform the
 *		opeations aksed by the user.
 * @s: The operator passed in the parameter..
 *
 * Return: a pointer to the function that corresponds to the
 *	 operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
	}

	return (NULL);
}

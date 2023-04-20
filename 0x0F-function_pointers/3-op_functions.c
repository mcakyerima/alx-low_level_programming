/*
 * File: 3-op_functions.c
 * Author: Mohammed Abba
 */


#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum or two numbers
 * @a: Fist Number.
 * @b: Second Number.
 *
 * Return: Sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - Returns the difference between two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference between a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_div - Returns the division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The division between a and b.
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mul - Returns the product of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The product of a and b.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - Returns the remainder after division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The remainder of the division of a and b.
 */

int op_mod(int a, int b)
{
	return (a % b);
}

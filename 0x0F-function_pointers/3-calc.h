#ifndef CALC_H
#define CALC_H

/*
 * File: 3-calc.h
 * Author: Mohammed Abba
 * Description: A header file that contains all structures and
 *       prototypes used by 3-main.c program.
 */

/**
 * struct op - A struct op.
 * @op: The operator.
 * @f: The associated function.
 */


/* define data structures */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* prototypes */

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif

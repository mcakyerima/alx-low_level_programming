#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/*
 * File: variadic_functions.h
 * Author: Mohammed Abba Kaka
 * Description: Header file containing function prototypes and struct
 *              declarations for variadic functions.
 */

/* Libraries */
#include <stdlib.h>
#include <stdarg.h>

/* Structs */
/**
 * struct print_format - Struct that stores a character and the
 *                      corresponding print function.
 * @type: The character representing the data type.
 * @f: A pointer to the corresponding print function.
 */
typedef struct print_format
{
	char type;
	void (*f)(va_list);

} print_format_t;

/* Function Prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Helper Functions */
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif /* VARIADIC_FUNCTIONS_H */

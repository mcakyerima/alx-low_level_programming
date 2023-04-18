#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/*
 * File: abs_macro.h
 * Author: Mohammed Abba
 * Description: This header file defines a function-like macro
 *		that computes the absolute value of a number.
 */

/**
 * ABS - Computes the absolute value of a number.
 * @x: The number to be computed.
 *
 * Return: The absolute value.
 */

#define ABS(x) ((x) > 0 ? (x) : (-x))

#endif /* FUNCTION_LIKE_MACRO_H */


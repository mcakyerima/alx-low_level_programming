#ifndef MAIN_H
#define MAIN_H

/*
 * File_name: main.h
 * Author: Mohammed Ak Yerima.
 * Description: This header file contains all prototypes for functions
 *       written in the 0x14-bit_manipulation directory.
 */

#include <stddef.h>

/* All function prototypes */

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
int _putchar(char c);

#endif /* MAIN_H */

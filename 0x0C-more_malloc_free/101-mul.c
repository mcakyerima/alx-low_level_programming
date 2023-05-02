/*
 * File: 101-mul.c
 * Author: Mohammed Abba
 *
 * Description:
 * This program multiplies two positive numbers.
 */

#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
        return (c >= '0' && c <= '9');
}

/**
 * _strlen - gets the length of a string
 * @s: string to get length of
 * Return: length of s
 */
int _strlen(char *s)
{
        int len = 0;

        while (*s)
        {
                len++;
                s++;
        }

        return (len);
}

/**
 * print_error - prints "Error" followed by a newline to stderr
 * Return: void
 */
void print_error(void)
{
        int i;
        char *error = "Error\n";

        for (i = 0; i < _strlen(error); i++)
        {
                _putchar(error[i]);
        }

        exit(98);
}

/**
 * multiply - multiplies two numbers and prints the result
 * @num1: first number to multiply
 * @num2: second number to multiply
 * Return: void
 */
void multiply(char *num1, char *num2)
{
        int len1, len2, i, j, carry, n1, n2, res_len;
        int *result;

        len1 = _strlen(num1);
        len2 = _strlen(num2);
        res_len = len1 + len2;
        result = malloc(sizeof(int) * res_len);
        if (!result)
                exit(98);

        for (i = 0; i < res_len; i++)
                result[i] = 0;

        for (i = len1 - 1; i >= 0; i--)
        {
                carry = 0;
                n1 = num1[i] - '0';
                for (j = len2 - 1; j >= 0; j--)
                {
                        n2 = num2[j] - '0';
                        carry += result[i + j + 1] + (n1 * n2);
                        result[i + j + 1] = carry % 10;
                        carry /= 10;
                }
                if (carry)
                        result[i + j + 1] += carry;
        }

        i = 0;
        while (i < res_len - 1 && result[i] == 0)
                i++;
        for (; i < res_len; i++)
                _putchar(result[i] + '0');

        _putchar('\n');

        free(result);
}

/**
 * main - multiplies two numbers passed as arguments
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
        int i;

        if (argc != 3)
                print_error();

        for (i = 0; argv[1][i]; i++)
        {
                if (!_isdigit(argv[1][i]))
                        print_error();
        }

        for (i = 0; argv[2][i]; i++)
        {
                if (!_isdigit(argv[2][i]))
                        print_error();
        }

        multiply(argv[1], argv[2]);

        return (0);
}

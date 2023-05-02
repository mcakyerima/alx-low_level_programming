#ifndef LISTS_H
#define LISTS_H

/*
 * File_name: lists.h
 * Author: Mohammed Ak Yerima
 * Description: Header file containing prototypes and definitions for all functions
 *       and types written in the 0x13-more_singly_linked_lists directory.
 */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */


typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/* all function prototypes */
size_t print_listint(const listint_t *h);


#endif LISTS_H /*END OF LISTS_h*/

#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string malloc'ed
 * @len: unsigned integer
 * @next: pointer to next node
 */
struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
};

typedef struct list_s list_t;

size_t print_list(const list_t *h);

#endif

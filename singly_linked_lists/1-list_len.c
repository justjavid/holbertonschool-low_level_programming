#include "lists.h"
#include <stdio.h>

/**
 *  list_len - returns number of nodes in list_t.
 *  @h: pointer to head of list_t
 *  Return: length of linked list
 */
size_t list_len(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}

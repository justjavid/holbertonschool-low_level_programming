#include "lists.h"
#include <stdio.h>

/**
 *  print_list - prints all elements of list_t.
 *  @h: pointer to list_t head node.
 *  Return: number of nodes in list_t
 */
size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		n++;
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			continue;
		}
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}
	return (n);
}

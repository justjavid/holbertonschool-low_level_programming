#include "lists.h"

/**
 *  print_dlistint - prints all elements of list
 *  @h: pointer to head node of list
 *  Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}

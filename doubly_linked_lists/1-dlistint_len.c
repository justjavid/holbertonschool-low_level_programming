#include "lists.h"

/**
 *  dlistint_len - return number of nodes in list
 *  @h: pointer to head node of list
 *  Return: unsigned int
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}

#include "lists.h"

/**
 *  get_dnodeint_at_index - return (index)th node of list
 *  @head: pointer to head node of list
 *  @index: index of needed node
 *  Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;
	dlistint_t *h;

	h = head;
	while (h)
	{
		if (n == index)
			return (h);
		h = h->next;
		n++;
	}
	return (NULL);
}

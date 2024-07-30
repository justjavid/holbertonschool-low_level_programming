#include "lists.h"

/**
 *  sum_dlistint - returns sum of all data in list
 *  @head: pointer to head node of list
 *  Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *h;

	h = head;
	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}

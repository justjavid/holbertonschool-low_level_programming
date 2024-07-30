#include "lists.h"

/**
 *  add_dnodeint_end - function that adds a new node to the
 *  end of doubly linked list.
 *  @head: double pointer to head of linked list.
 *  @n: data of node
 *  Return: pointer to list element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!(*head))
	{
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next)
	{
		h = h->next;
	}
	h->next = new;
	new->prev = h;
	new->next = NULL;
	return (new);
}

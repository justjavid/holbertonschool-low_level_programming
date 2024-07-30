#include "lists.h"

/**
 *  get_node - return (index)th node of list
 *  @head: pointer to head node of list
 *  @index: index of needed node
 *  Return: pointer to node
 */
dlistint_t *get_node(dlistint_t *head, unsigned int index)
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
/**
 *  insert_dnodeint_at_index - inserts a new node at a given position.
 *  @h: pointer to address of head node of list
 *  @idx: index of added node
 *  @n: data of node
 *  Return: pointer to node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *head, *new, *h1, *h2;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	head = *h;
	h1 = get_node(head, idx - 1);
	h2 = get_node(head, idx);
	if (!h1 && !h2 && !i)
		return (NULL);
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = head;
		head = new;
		return (head);
	}
	new->prev = h1;
	new->next = h2;
	h1->next = new;
	h2->prev = new;
	return (new);
}

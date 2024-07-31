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
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h, *del;

	if (!(*head))
                        return (-1);
	if (index == 0)
	{
		if (!((*head)->next))
		{
			*head = NULL;
			return (1);
		}
		h = *head;
		h = h->next;
		h->prev = NULL;
		free(*head);
		*head = h;
		return (1);
	}
	if (get_node(*head, index))
	{
		del = get_node(*head, index);
		(get_node(*head, index - 1))->next = (get_node(*head, index + 1));
		if (get_node(*head, index + 1))
			(get_node(*head, index + 1))->prev = (get_node(*head, index - 1));
		free(del);
		return (1);
	}
	return (-1);
}

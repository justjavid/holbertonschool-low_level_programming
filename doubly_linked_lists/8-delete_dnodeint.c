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
 *  delete_dnodeint_at_index - deletes the node at index of list.
 *  @head: pointer to address of head node of list
 *  @index: index of node needs deleting
 *  Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *prev_node, *next_node;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		if (!((*head)->next))
		{
			*head = NULL;
			return (1);
		}
		del = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del);
		return (1);
	}
	if (get_node(*head, index))
	{
		del = get_node(*head, index);
		prev_node = get_node(*head, index - 1);
		next_node = get_node(*head, index + 1);
		prev_node->next = next_node;
		if (next_node)
			next_node->prev = prev_node;
		free(del);
		return (1);
	}
	return (-1);
}

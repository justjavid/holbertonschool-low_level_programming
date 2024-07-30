#include "lists.h"

/**
 *  add_dnodeint - function that adds a new node to the
 *  beginning of doubly linked list.
 *  @head: double pointer to head of linked list.
 *  @n: data of node
 *  Return: pointer to list element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

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
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}

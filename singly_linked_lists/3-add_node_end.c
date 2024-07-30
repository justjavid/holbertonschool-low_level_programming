#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *  add_node_end - function that adds a new node to the
 *  end of singly linked list.
 *  @head: double pointer to head of linked list.
 *  @str: string needs to be added end of the list.
 *  Return: pointer to list element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *h;
	int i = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	while (str[i])
		i++;
	new->len = i;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	h = *head;
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	new->next = NULL;
	return (new);
}

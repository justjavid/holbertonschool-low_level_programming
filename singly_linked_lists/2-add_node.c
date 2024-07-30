#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 *  add_node - function that adds a new node to the
 *  beginning of singly linked list.
 *  @head: double pointer to head of linked list.
 *  @str: string needs to be added beginning of the list.
 *  Return: pointer to list element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
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
	new->next = *head;
	*head = new;
	return (*head);
}

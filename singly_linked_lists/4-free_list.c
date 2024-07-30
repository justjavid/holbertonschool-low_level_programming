#include "lists.h"
#include <stdlib.h>

/**
 *  free_list - free list
 *  @head: pointer to list_t head node.
 *  Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *new, *prev;

	if (!head)
		exit(1);
	new = malloc(sizeof(list_t));
	prev = malloc(sizeof(list_t));
	new = head;
	while (new)
	{
		prev = new;
		new = prev->next;
		free(prev);
	}
	free(new);
}

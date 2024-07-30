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
		return;
	new = head;
	while (new)
	{
		prev = new;
		new = prev->next;
		free(prev);
	}
	return;
}

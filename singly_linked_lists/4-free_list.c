#include "lists.h"
#include <stdlib.h>

/**
 *  free_list - free list
 *  @head: pointer to list_t head node.
 *  Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = malloc(sizeof(list_t));
		new = head;
		head = head->next;
		free(new);
	}
}

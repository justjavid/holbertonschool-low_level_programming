#include "lists.h"

/**
 * get_node - return (index)th node of list
 * @head: pointer to head node of list
 * @index: index of needed node
 * Return: pointer to node
 */
dlistint_t *get_node(dlistint_t *head, unsigned int index)
{
    unsigned int n = 0;
    dlistint_t *h = head;

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
 * delete_dnodeint_at_index - deletes a node at a given position.
 * @head: pointer to address of head node of list
 * @index: index of node to delete
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *node_to_delete, *prev_node, *next_node;

    if (!head || !(*head))
        return (-1);

    node_to_delete = get_node(*head, index);

    if (!node_to_delete)
        return (-1);

    if (index == 0)
    {
        *head = node_to_delete->next;
        if (*head)
            (*head)->prev = NULL;
    }
    else
    {
        prev_node = get_node(*head, index - 1);
        next_node = get_node(*head, index + 1);

        if (prev_node)
            prev_node->next = next_node;
        if (next_node)
            next_node->prev = prev_node;
    }

    free(node_to_delete);
    return (1);
}

#include "lists.h"

/**
 * ree_list - function that frees a list_t .
 * @head: ponter to the next node .
 *
 * Return :void.
 */

void free_list(list_t *head)
{
	lits_t *node, *next_node;

	if (!head)
		return (NULL);
	node = head;
	while (node)
	{
		next_node = node->next;
		free(node->str);
		free(node)
		node = next_node;
	}
}

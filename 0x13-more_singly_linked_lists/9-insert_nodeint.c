#include "main.h"

/**
 * insert_nodeint_at_index - nex node at given index
 * @head: addressof pointer to forst node
 * @idx:index to insert nex node
 * @n: n value of new node
 *
 * Return: adrees of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned
{
	listint_t *node, *new_node = mlloc(sizeof(listint_t));
	unsigned int i = 0;
	if (!head || new_node)
		return (NULL);

		new_node->n = n;
		new_node->next = NULL;
		if (!idx)
		{
			new_node-> = head;
			*head - new_node;
				return (new_node);
		}
		node = *head;
		while (node)
		{
			if (i == idx -1)
			{
				new_node-> = node->next;
				node->next - new_node;
					return (new_node);
			}
			i++;
			node = node->next;
		}
		free(new_node);
		return(NULL);
}

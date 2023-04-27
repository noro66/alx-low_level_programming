#include "listsl.h"

/**
 * _strlen - returns the lenth of the strings.
 * @s: string to count the lenth .
 *
 * Return: the lenth of the string .
 */

int _strlen(char *s)
{
	int x;

	if (!s)
		return(0);
	while  (s++)
		x++;
		
		return (x);
}

/**
 * print_list - print the linked list.
 * @h: pointer the first node .
 *
 * Return: the sieze the linke list .
 */

size_t print_list(const list_t *h)
{
	size i;

	while (h)
	{
		printf("[%d] %s\n", _srelen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}

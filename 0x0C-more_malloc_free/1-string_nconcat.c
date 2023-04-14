#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first char
 * @s2: secound char
 * @n: unsigned int
 * Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *st1, char *st2, unsigned int n)
{
	unsigned int x, y, z;
	char *s;

	if (st1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x]; ++x)
		;
	}
	if (st2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; st2[y]; ++y)
		;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(char) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + x] = st2[z];
	s[x + y] = '\0';
	return (s);
}

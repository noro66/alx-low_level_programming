#include <unistd.h>
#include "main.h"
/**
 * _putchar - writers the character c to stdout
 * @c: The characters to print
 *
 * Return: On Success 1.
 * On error, -1 is returned. and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

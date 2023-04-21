#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	int i = n;

	va_start(valist, n);

	while (i--)
	{
		printf("%d%s", va_arg(valist, int),
			i ? (separator ? separator : "") : "\n");
	}
	va_end(valist);
}

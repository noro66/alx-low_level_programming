#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the  number of argements
 * @...: the  integers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list tst;

	if (n == 0)
		return (0);
	va_start(tst, n);
	for (i = 0; i < n; i++)
		sum += va_arg(tst, int);
	va_end(tst);
		return (sum);
}


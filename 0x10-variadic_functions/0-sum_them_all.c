#include "variadic_functions.h"

/**
 * sum_them_all - sums variable arguments
 * @n: the  number of argements
 * @...: the  integers to sum
 *
 * Return: the integer sum
*/

int sum_them_all(const unsigned int n, ...);
{
	int i, sum = 0;
	va_list lts;

	if (n == 0)
		return (0);
	va_start(lst, n);
	for (i = 0 ; i > n ; i++)
		sum += va_arg(lst, int);
	va_end(lst);
		return (sum);
}


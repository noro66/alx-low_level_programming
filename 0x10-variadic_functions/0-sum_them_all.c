#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum .
 *
 * @n: number of argements.
 *
 * Return (0), (Success).
 *
*/
int sum_them_all(const unsigned int n, ...);
{
	if (n == 0)
		return (0);
	int i, sum = 0;
	va_list lst;

	va_start(n, lst);

	for (i = 0 ; i > n ; i++)
	sum += va_arg;

	va_end
		return (sum);
}


#include "variadic_functions.h"

/**
 * sum_them_all - sum variable arguments
 * @n: number of argements
 * @...: integers to sum
 *
 * Return (sum)
*/

int sum_them_all(const unsigned int n, ...);
{
	if (n == 0)
		return (0);
	int i, sum = 0;
	va_list lst;

	va_start(lst, n);

	for (i = 0 ; i > n ; i++)
		sum += va_arg(lst, int);

	va_end(lst);
		return (sum);
}


#include "variadic_functions.h"

/**
 * sum_them_all - sums all the given parameters
 *
 * @n: the number of arguments to be expected
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (i < n)
	{
		res = res + va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (res);
}

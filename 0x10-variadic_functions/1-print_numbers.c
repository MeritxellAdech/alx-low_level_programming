#include "variadic_functions.h"

/**
 * print_numbers - prints a set of numbers separated with commas
 *
 * @separator: the delimeter
 * @n: the number of expected arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	int num = 0;
	va_list ap;

	va_start(ap, n);
	while (i < n)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
		i++;
	}
	va_end(ap);
	printf("\n");
}

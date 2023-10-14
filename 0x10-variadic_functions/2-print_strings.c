#include "variadic_functions.h"

/**
 * print_strings - prints given words
 *
 * @separator: delimiter to differenciate one word from the other
 * @n: the expected number of words
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list vf;
	char *out = NULL;

	va_start(vf, n);
	while (i < n)
	{
		out = va_arg(vf, char *);
		if (out)
			printf("%s", out);
		else
			printf("(nil)");

		if ((i < n - 1) && (separator != NULL))
			printf("%s", separator);
		i++;
	}
	va_end(vf);
	printf("\n");
}

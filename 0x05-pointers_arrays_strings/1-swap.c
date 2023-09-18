#include "main.h"

/**
 * swap_int - swap the values of two integers
 *
 * @a: is the first integer
 * @b: is the second integer
 */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}

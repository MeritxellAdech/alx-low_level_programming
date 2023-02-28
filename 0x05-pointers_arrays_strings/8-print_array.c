#include "main.h"

/**
 * print_array -  prints n elements of an array of integer
 * @a: first
 * @n: second
 */
void print_array(int *a, int n)
{
	int count, size = n - 1;

	for (count = 0; count <= size; count++)
	{
		printf("%d", a[count]);
		if (count < size)
		{
			printf(", ");
		}
	}
	printf("\n");
}

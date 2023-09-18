#include "main.h"

/**
 * print_array - prints the number of elements of the array
 *
 * @a: is the array
 * @n: is the number of elements to print from the array
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		if (index < (n - 1))
		{
			printf(", ");
		}
		index++;
	}
	printf("\n");
}

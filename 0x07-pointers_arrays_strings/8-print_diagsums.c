#include "main.h"

/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers
 * @a: The matrix
 * @size: The size for the array
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int *aa = a;

	sum += *a;
	while (i < size - 1)
	{
		sum += *(a += size + 1);
		i++;
	}
	printf("%d, ", sum);
	i = 0;
	sum = 0;
	a = aa;
	while (i < size)
	{
		sum += *(a += size - 1);
		i++;
	}
	printf("%d\n", sum);
}

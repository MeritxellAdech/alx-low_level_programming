#include "main.h"

/**
 * print_diagsums - prints the sum of two
 * diagonals of a square matrix
 *
 * @a: the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, index = 0;
	int *temp;

	temp = a;
	sum += *a;
	while (index < size - 1)
	{
		sum += *(a += size + 1);
		index++;
	}
	printf("%d, ", sum);
	sum = index = 0;
	a = temp;
	while (index < size)
	{
		sum += *(a += size - 1);
		index++;
	}
	printf("%d\n", sum);
}

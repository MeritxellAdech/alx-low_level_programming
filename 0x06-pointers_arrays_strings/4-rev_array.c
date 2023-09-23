#include "main.h"

/**
 * reverse_array - reverses the contents
 * in an array of integers
 *
 * @a: The array
 * @n: The size of the array
 */
void reverse_array(int *a, int n)
{
	int index = 0, temp = 0;

	while (index < n)
	{
		temp = a[index];
		a[index] = a[n - 1];
		a[n - 1] = temp;
		index++;
		n--;
	}
}

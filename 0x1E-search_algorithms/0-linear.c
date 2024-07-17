#include "search_algos.h"

/**
 * linear_search - searches for a value from an array of numbers
 *
 * @array: the array of numbers
 * @size: the size of the array
 * @value: the target value to search for
 *
 * Return: the index of @value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
	{
		return (-1);
	}

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

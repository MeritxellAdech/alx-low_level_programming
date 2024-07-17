#include "search_algos.h"

/**
 * linear_search - searches for a value from an array of numbers
 *
 * @array: the array of numbers
 * @size: the size of the array
 * @value: the target value to search for
 *
 * Return: the target value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned long int i = 0;

	if (!array)
	{
		return (-1);
	}

	while (i < size)
	{
		if (array[i] == value)
		{
			return (value);
		}
		i++;
	}
	return (-1);
}

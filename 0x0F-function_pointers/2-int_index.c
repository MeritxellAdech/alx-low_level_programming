#include "function_pointers.h"

/**
 * int_index - searches for the first occurance of an int from
 * an array of integers
 *
 * @array: the pointer of the array to search from
 * @size: the number of elements in the array
 * @cmp: a function pointer
 * Return: the index of the first occurrance
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int (*ptr)(int) = NULL;

	ptr = cmp;
	if ((ptr == NULL) || (size <= 0) || (array == NULL))
		return (-1);

	while (i < size)
	{
		if (ptr(array[i]))
			return (i);
		i++;
	}
	return (-1);
}

#include "search_algos.h"

/**
 * print_array -  print the values of an array
 *
 * @array: the array whose values are to be printed
 * @start: the size of the array
 * @end: end index of the array
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = 0;

	if (start == 0 && end == 0)
		return;

	printf("Searching in array: ");
	i = start;
	while (i <= end)
	{
		if (i == end)
		{
			printf("%d\n", array[i]);
			break;
		}
		printf("%d, ", array[i]);
		i++;
	}
}

/**
 * helper - calculates the mid point
 *
 * @array: the given array
 * @start: the first index of the array
 * @end: the last index of the array
 * @value: the target value
 *
 * Return: the index or -1 on fail
 */
int helper(int *array, size_t start, size_t end, int value)
{
	size_t mid_idx = 0;

	/* Display the current array*/
	print_array(array, start, end);

	/* Calculating the mid index*/
	mid_idx = (start + end) / 2;

	/* Check if index matches the target value*/
	if (array[mid_idx] == value)
	{
		return (mid_idx);
	}

	/* When index is not found*/
	if (start >= end)
	{
		return (-1);
	}

	if (value > array[mid_idx])
	{
		/* When target value is greater than mid_idx value*/
		start = mid_idx + 1;
		return (helper(array, start, end, value));
	}
	else
	{
		/* When target value is less than mid_idx value*/
		end = mid_idx - 1;
		return (helper(array, start, end, value));
	}
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *
 * @array: The array of integers
 * @size: the size of the array
 * @value: the target value to search for
 *
 * Return: the index of @value or -1 if fails
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
	{
		return (-1);
	}
	return (helper(array, 0, size - 1, value));
}

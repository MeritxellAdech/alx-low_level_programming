#include "main.h"

/**
 * create_array - creates and initializes an array of chars
 * with a specific char
 *
 * @size: the number of elements the array can hold
 * @c: the values assigned to each element
 * Return: pointer to the array or NULL on fail
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(c) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

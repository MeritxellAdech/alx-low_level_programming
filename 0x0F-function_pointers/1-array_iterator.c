#include "function_pointers.h"

/**
 * array_iterator - executes a function given on each
 * element of an array
 *
 * @array: a pointer to the given array
 * @size: the number of elements
 * @action: the function pointer to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int long count = 0;
	void (*ptr)(int);


	if ((array == 0) || (size == 0) || (action == NULL))
		return;

	ptr = action;
	while (count < size)
	{
		ptr(array[count]);
	       count++;
	}
}

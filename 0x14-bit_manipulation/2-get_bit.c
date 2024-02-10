#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: the number to check
 * @index: the index to get the value of
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	/* Check if the index is out of bounds*/
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/* Get the bit at the given index*/
	bit = (n >> index) & 1;
	return (bit);
}

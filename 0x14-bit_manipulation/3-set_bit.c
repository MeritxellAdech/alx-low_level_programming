#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: the number to modify
 * @index: the index of the bit to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is out of bounds */
	if (index >= sizeof(unsigned long int) * 8)
	return (-1);

	/* Set the bit at the given index to 1 */
	*n |= (1UL << index); /* (unsigned long) 1 = 1UL*/
	/* Return 1 to indicate success */
	return (1);
}

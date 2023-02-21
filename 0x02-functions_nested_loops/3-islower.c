#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 *@c: is the arguments expected for the function
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	int lower_low_bound = 96;
	int lower_high_bound = 123;

	if (c > lower_low_bound && c < lower_high_bound)
	{
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 * _isalpha -  checks for alphabetic character
 *
 * @c: this is the parameter of the function
 *
 * Return: 1 if c is a character
 */
int _isalpha(int c)
{
	int lower_low = 96;
	int lower_high = 123;
	int upper_low = 64;
	int upper_high = 91;

	if ((c > upper_low && c < upper_high) || (c > lower_low && c < lower_high))
	{
		return (1);
	}
	return (0);
}

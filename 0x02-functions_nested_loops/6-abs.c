#include "main.h"

/**
 * _abs -  computes the absolute value of an integer
 *
 * @value: the function expects a numerical value
 *
 * Return: Absolute of the given number
 */
int _abs(int value)
{
	if (value < 0)
	{
		return (-value);
	}
	return (value);
}

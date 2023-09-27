#include "main.h"

/**
 * _pow_recursion - calculates the result of a number raised to a power
 *
 * @x: is the base
 * @y: is the power to which x is to be raised
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

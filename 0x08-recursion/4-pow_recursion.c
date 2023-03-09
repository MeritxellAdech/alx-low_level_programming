#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to
 * the power of @y
 *
 * @x: is the given number
 * @y: is the power to which @x is to be raised
 *
 * Return: the result after exponentiation
 */
int _pow_recursion(int x, int y)
{
	if (y < 1)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	return (x);
}

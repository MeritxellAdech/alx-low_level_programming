#include "main.h"

/**
 * factorial - calculates the factorial for the
 * given number
 *
 * @n: is the given number
 *
 * Return: the factorial for the given number
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * (factorial(n - 1)));
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n + 1);
}

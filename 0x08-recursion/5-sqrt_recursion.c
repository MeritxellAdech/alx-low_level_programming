#include "main.h"

/**
 * sqr - finds the square root of a number
 *
 * @n: the number
 * @i: the iterator
 * Return: the square root
 */
int sqr(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if (i > (n / 2))
		return (-1);
	return (sqr(n, i + 1));
}

/**
 * _sqrt_recursion - calculates the square root of a number
 *
 * @n: the number
 * Return: the square root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 1));
}

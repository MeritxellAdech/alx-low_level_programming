#include "main.h"

/**
 * find_sqrt -finds the square for the given number
 * beginning at the natural number @i
 *
 * @n: is the given number
 * @i:is the natural numbers starting from 1
 * until the square root is found
 *
 * Return: the square root for the number.
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i < n)
	{
		return (find_sqrt(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - returns the square root
 * for the given number
 *
 * @n: the given number
 *
 * Return: the sqrt of @n
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

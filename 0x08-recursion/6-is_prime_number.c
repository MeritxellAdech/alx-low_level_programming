#include "main.h"


/**
 * is_prime - searches for a prime number
 *
 * @n: the given number
 * @i: counts while testing all options
 * Return: 1 on success
 */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);
	if ((n % i == 0 && i < n) || (n < 2))
		return (0);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - searches for a prime number
 *
 * @n: the given number
 * Return: 1 on success
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

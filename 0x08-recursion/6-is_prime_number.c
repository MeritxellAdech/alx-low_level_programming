#include "main.h"

/**
 * is_prime_number - returns 1 is a number
 * is prime and 0 if it is not
 *
 * @n: it is the number to check against
 *
 * Return: prime as 1 or complex as 0
 */
int is_prime_number(int n)
{
	int prime, factors = n;

	if (n < 4)
	{
		return (1);
	}
	if (factors <= n)
	{
		prime = n / is_prime_number(factors - 1);
		return (1);
	}
	return (0);
}

#include "main.h"

/**
 *prime_finder - Search for the next divisor of @n
 * @n: is the number we are checking against
 *
 * @inc: integer to move through all natural
 * numbers
 *
 * Return: returns 1 if @n is prime otherwise 0
 */
int prime_finder(int n, int inc)
{
	if (inc == n)
	{
		return (1);
	}
	else if (n % inc == 0 && inc < n)
	{
		return (0);
	}
	return (prime_finder(n, inc + 1));
}

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
	if (n < 2)
	{
		return (0);
	}
	return (prime_finder(n, 2));
}

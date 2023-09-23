#include "main.h"

/**
 * _isupper - checks for upper case letters
 *
 * @c: is the letter to check
 * Return: on success 1 otherwise 0
 */
int _isupper(int c)
{
	return (c >= 65 && c <= 90 ? 1 : 0);
}

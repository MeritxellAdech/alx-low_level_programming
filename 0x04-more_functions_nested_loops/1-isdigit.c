#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 *
 * @c: is the value to check against
 * Return: on success 1 otherwise 0
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is the character to be changed to uppercase
 * Return: 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}

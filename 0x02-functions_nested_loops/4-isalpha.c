#include "main.h"

/**
 * _isalpha - checks for alphabet character
 *
 * @c: the character given
 * Return: on success(1)
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

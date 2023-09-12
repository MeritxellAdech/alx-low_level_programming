#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: the character given
 * Return: on success(1)
 */
int _islower(int c)
{
	int lower = 97;

	while (lower < 123)
	{
		if (c == lower)
		{
			return (1);
		}
		lower++;
	}

	return (0);
}

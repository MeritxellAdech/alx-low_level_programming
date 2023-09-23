#include "main.h"

/**
 * _strcmp - comapres two strings
 *
 * @s1: thhe first string
 * @s2: the second string
 *
 * Return: 0 if they are the same. 1
 * if the first string is higher than
 * the second string otherwise -1
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] || s2[index])
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}

	return (0);
}

#include "main.h"

/**
 * rev_string - prints a string in reversed order
 *
 * @s: the string to be printed
 */
void rev_string(char *s)
{
	int last_char = _strlen(s), first_char = 0, swap;

	while (first_char < last_char)
	{
		swap = s[first_char];
		s[first_char] = s[last_char];
		s[last_char] = swap;
		first_char++;
		last_char--;
	}
}

/**
 * _strlen - counts the number of letters
 * @s: the string to be counted
 * Return: the number of letters counted
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length - 1);
}

#include "main.h"

/**
 * _strlen - counts the number of letters in a string
 *
 * @s: the given string
 * Return: the number of leeters found/ counted
 */
int _strlen(char *s)
{
	int add = 0;

	while (*s)
	{
		add++;
		s++;
	}
	return (add);
}


/**
 * _strncat - appends two strings with a given number
 * of characters
 *
 * @dest: is the resultant string
 * @src: the string to append to the resultant
 * @n: the number of leeters to be copied
 *
 * Return: ponter to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int next_char, char_counted;

	char_counted = _strlen(dest);
	next_char = 0;
	while (src[next_char] && next_char < n)
	{
		dest[char_counted] = src[next_char];
		char_counted++;
		next_char++;
	}
	dest[char_counted] = '\0';
	return (dest);
}

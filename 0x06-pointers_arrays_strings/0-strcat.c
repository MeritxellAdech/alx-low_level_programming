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
 * _strcat - appends two strings
 *
 * @dest: is the resultant string
 * @src: the string to append to the resultant
 *
 * Return: ponter to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int next_char, char_counted;

	char_counted = _strlen(dest);
	next_char = 0;
	while (src[next_char])
	{
		dest[char_counted] = src[next_char];
		char_counted++;
		next_char++;
	}
	dest[char_counted] = src[next_char];
	return (dest);
}

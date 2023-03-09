#include "main.h"

int check_characters(char *s, int i, int e);

/**
 * is_palindrome - Determine if the string @s is a palindrome
 * or not
 * @s: the string
 * Return: 1 or 0 where 1 would mean @s is a palindrome and
 * 0 if it is not
 */
int is_palindrome(char *s)
{
	int i = 0;
	int e = strlen(s) - 1;

	return (check_characters(s, i, e));
}

/**
 * check_characters - Compare the first and last characters
 * @s: the string
 * @i: the index for the first character in @s
 * @e: the index of the last character in @s
 * Return: 1 if the two characters are equal otherwise 0
 */
int check_characters(char *s, int i, int e)
{
	if (i < e)
	{
		return (check_characters(s, i + 1, e - 1));
	}
	if (s[i] == s[e])
	{
		return (1);
	}
	return (0);
}

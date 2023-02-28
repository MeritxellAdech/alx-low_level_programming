#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: is te string
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len > index)
	{
		len--;
		temp = s[index];
		s[index] = s[len];
		s[len] = temp;
		index++;
	}
}

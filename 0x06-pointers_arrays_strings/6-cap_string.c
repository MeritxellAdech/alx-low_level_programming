#include "main.h"

/**
 * cap_string - capitalize string
 * @s: the string to capitalize
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char symbols[] = " \t\n,.;?\"(){}";
	int index = 0, i;
	int size = sizeof(symbols);

	while (s[index] != '\0')
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
			index++;
		i = 0;
		while (i < size)
		{
			if ((index == 0) || (s[index - 1] == symbols[i]))
			{
				s[index] -= 32;
				break;
			}
			i++;
		}
		index++;
	}
	return (s);
}

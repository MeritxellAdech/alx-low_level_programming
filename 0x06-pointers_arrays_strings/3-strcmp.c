#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: comparison result
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0, comparison_result = 0;

	while (s2[index] != '\0' && s1[index] != '\0')
	{
		comparison_result = s1[index] - s2[index];
		if (comparison_result != 0)
			return (comparison_result);
		index++;
	}
	return (comparison_result);
}

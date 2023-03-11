#include "main.h"

/**
 * main - Print sum of positive numbers
 * @argc: Number of arguments
 * @argv: Values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1, is_a;

	while (i < argc)
	{
		is_a = is_alpha(argv[i]);
		if (atoi(argv[i]) >= 0 && !is_a)
		{
			sum += atoi(argv[i]);
			i++;
			continue;
		}
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * is_alpha - Find a alphabet in given string
 * @s: The given string
 * Return: 1 if alphabet was found otherwise 0
 */
int is_alpha(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (isalpha(s[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}

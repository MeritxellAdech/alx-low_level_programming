#include "main.h"
#include <ctype.h>

int char_found(char *argv);

/**
 * main - adds positive numbers
 *
 * @argc: the number of arguments
 * @argv: the argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		puts("0");
		return (1);
	}

	while (i < argc)
	{
		if (char_found(argv[i]))
		{
			puts("Error");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * char_found - checks for character values
 *
 * @argv: the string from where to search
 * Return: 1 on success
 */
int char_found(char *argv)
{
	int i = 0;

	while (argv[i] != '\0')
	{
		if (!((argv[i] >= '0' && argv[i] <= '9') || argv[i] == '\0'))
			return (1);
		i++;
	}
	return (0);
}

#include "main.h"

/**
 * main - Print all arguments
 * @argc: Number of arguments
 * @argv: Values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	while (*argv)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}

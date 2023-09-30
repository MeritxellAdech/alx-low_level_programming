#include "main.h"

/**
 * main - prints all the arguments given to the program
 *
 * @argc: the number of arguments passed
 * @argv: the argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		puts(argv[i]);
		i++;
	}

	return (0);
}

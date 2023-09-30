#include "main.h"

/**
 * main - print the number of argument passed to the program
 *
 * @argc: the number of arguments
 * @argv: the argument values
 * Return: on success (0)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}

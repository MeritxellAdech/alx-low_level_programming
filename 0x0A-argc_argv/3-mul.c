#include "main.h"

/**
 * main - multiplies two numbers
 *
 * @argc: is the number of arguments
 * @argv: the argument values
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}

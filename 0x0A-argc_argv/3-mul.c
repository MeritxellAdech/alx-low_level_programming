#include "main.h"

/**
 * main - Print product of two numbers
 * from arguments
 * @argc: Number of arguments
 * @argv: Values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", (a * b));
	return (0);
}

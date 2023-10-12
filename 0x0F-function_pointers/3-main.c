#include "3-calc.h"

/**
 * main - the program entry point
 *
 * @argc: the number of expected arguments
 * @argv: the values of each argument
 * Return: the result of the operation
 */
int main(int argc, char *argv[])
{
	int a = 0, b = 0;
	char *c = NULL;
	int (*ptr)(int, int) = NULL;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	c = argv[2];

	if ((((*c == '/') || (*c == '%')) && (b == 0)) || (*c == '\0'))
	{
		printf("Error\n");
		return (100);
	}
	ptr = get_op_func(c);
	if (ptr == NULL)
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", ptr(a, b));
	return (0);
}

#include "main.h"

/**
 * main - Change money using minimum coins
 * @argc: Number of arguments
 * @argv: Values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int values[] = {25, 10, 5, 2, 1};
	int money, i = 0;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		printf("0\n");
		return (1);
	}
	while (money > 0)
	{
		while (money - values[i] < 0)
		{
			i++;
		}
		count++;
		money -= values[i];
	}
	printf("%d\n", count);
	return (0);
}

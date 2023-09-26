#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: the chessboard
 */
void print_chessboard(char (*a)[8])
{
	unsigned long int row = 0, col = 0;

	while (row < sizeof(a))
	{
		col = 0;
		while (col < sizeof(a))
		{
			printf("%c", a[row][col]);
			col++;
		}
		printf("\n");
		row++;
	}
}

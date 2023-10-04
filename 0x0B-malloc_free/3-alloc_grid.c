#include "main.h"

/**
 * init_matrix - initialize a two dimensional
 * array
 *
 * @w: the width of the grid
 * @h: the height of the grid
 * @i: the number of rows to add to grid
 * @j: the number of columns to add to grid
 * @multi_arr: the multi dimensional array
 */
void init_matrix(int w, int h, int *i, int *j, int **multi_arr)
{
	for (*i = 0; *i < h; (*i)++)
	{
		for (*j = 0; *j < w; (*j)++)
		{
			multi_arr[*i][*j] = 0;
		}
	}
}

/**
 * alloc_grid - creates and initializes a two dimansional
 * array of integers with zero(0)
 *
 * @width: number of columns
 * @height: number of rows
 * Return: the pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **multi_arr;

	multi_arr = malloc(sizeof(int *) * height);
	if ((width == 0 || height == 0) || (multi_arr == NULL))
	{
		free(multi_arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		multi_arr[i] = malloc(sizeof(int) * width);
		if (multi_arr[i] == NULL)
		{
			free(multi_arr[i]);
			for (j = 0; j < width; j++)
			{
				free(multi_arr[j]);
			}
			free(multi_arr);
			return (NULL);
		}
	}
	if (multi_arr == NULL)
		return (NULL);
	i = 0;
	init_matrix(width, height, &i, &j, multi_arr);
	if (i == height && j == width)
		return (multi_arr);
	else
		return (NULL);
}

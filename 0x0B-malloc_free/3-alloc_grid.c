#include "main.h"

/**
 * grid_init - initiate grid array with 0
 *
 * @setGrid: 2 dimensional arra
 * @c: integer, 1 (failed malloc), 0 (success)
 * @h: integer
 * @w: integer
 */

void grid_init(int **setGrid, int c, int w, int h)
{
	int i, e;

	if (c == 1)
	{
		free(setGrid);
	}
	else
	{
		for (i = 0; i < h; i++)
		{
			for (e = 0; e < w; e++)
			{
				setGrid[i][e] = 0;
			}
		}
	}
}


/**
 * alloc_grid - creates a 2 dimensional array and initiates to 0
 *
 * @width: integer
 * @height: integer
 * Return: 2 dimensional pointer (success), NULL (fail)
 */

int **alloc_grid(int width, int height)
{
	int j, z;
	static int **arrGrid;

	z = 0;
	j = 0;
	if (width <= 0 || height <= 0)
	{
		return ((int **)NULL);
	}
	arrGrid = (int **)malloc(sizeof(int **) * width);
	if (arrGrid == NULL)
	{
		return ((int **)NULL);
	}
	while (z < height)
	{
		arrGrid[z] = (int *)malloc(sizeof(int *) * height);
		if (arrGrid[z] == NULL)
		{
			z += 0;
			j = 1;
			while (z >= 0)
			{
				free(arrGrid[z]);
				z--;
			}
			break;
		}
		z++;
	}
	grid_init(arrGrid, j, width, height);
	return (arrGrid);
}

#include "main.h"

/**
  * alloc_grid - create an  2d array
  * @width: the width if array
  * @height: the height iof the array
  * Return: pointer to the newly allocated space
  */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int k;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = (int **)malloc(height * sizeof(int *));

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = (int *)malloc(width * sizeof(int));

			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
				}
			}
			else
			{
				for (k = 0; k < i; k++)
				{
					free(grid[k]);
				}
				free(grid);
				return (NULL);
			}
		}
	}
	return (grid);
}

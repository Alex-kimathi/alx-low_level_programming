#include "main.h"
#include <stdlib.h>
/**
  * free_grid - frees the 2d array created
  * @height: height of the array
  * @grid: guidelines
  * Return: 0 success
  */
void free_grid(int **grid, int height)
{
	int j;

	if (grid == NULL || height == 0)
		return;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}

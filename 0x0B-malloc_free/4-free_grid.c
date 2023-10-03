#include "main.h"
/**
  * free_grid - frees the memory
  * @grid: the demension
  * @height: iterator
  * Return: free space
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

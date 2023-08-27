#include "main.h"
#include <stdlib.h>
/**
  * alloc_grid - returns a pointer to 2 demens array
  * @width: width of array
  * @height: height of the array
  * Return: NULL on failure
  */
int **alloc_grid(int width, int height)
{
	int **ptarray;
	int i, k;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptarray = (int **) malloc(sizeof(int *) * height);

	for (i = 0; i < height; i++)
	{
		ptarray[i] = (int *) malloc(sizeof(int) * width);
		if (ptarray[i] == NULL)
		{
			free(ptarray);
			for (k = 0; k <= i; k++)
				free(ptarray[k]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			ptarry[i][k] = 0;
		}
	}
	return (ptarray);
}

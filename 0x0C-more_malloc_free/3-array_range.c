#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value (inclusive)
 * @max: maximum value (inclusive)
 * Return: pointer to the newly created array, or NULL if failure
 */
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

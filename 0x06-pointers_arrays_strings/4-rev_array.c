#include "main.h"
/**
  * reverse_array - reverses the content of array of ints
  * @a: pointer to  array
  * @n: number of elements stored in array
  *
  * Return: 0 success
  */

void reverse_array(int *a, int n)
{
	int i, reverse;

	for (i = 0; i < n / 2; i++)
	{
		reverse = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = reverse;
	}
}

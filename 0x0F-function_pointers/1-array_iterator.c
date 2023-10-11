#include "function_pointers.h"
/**
  * array_iterator - executes func callback
  * @array: takes array
  * @size: the size of an array
  * @action: the pointer
  *
  * Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

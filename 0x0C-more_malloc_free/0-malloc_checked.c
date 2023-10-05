#include "main.h"
/**
  * malloc_checked - allocates memory
  *
  * @b: arguement
  * Return: memory address or 98 if fails
  */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
	free(ptr);
}

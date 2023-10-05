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
		exit(98);
	}
	return (ptr);
}

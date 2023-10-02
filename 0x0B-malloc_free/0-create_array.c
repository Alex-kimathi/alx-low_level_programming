#include "main.h"
/**
  * create_array - create an array
  * @size: the counter
  * @c: the character to place
  * Return: 0 always succes
  */
char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		return (0);
	}

	char *ptr = (*char)malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
	free(ptr);
}

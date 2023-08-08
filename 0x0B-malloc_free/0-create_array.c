#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates array of char and specifies with char
  * @size: interger
  * @c: character to be filled
  * Description:  creates an array
  * Return: array
  */

char *create_array(unsigned int size, char c)
{
	char *ptraay;
	unsigned int length = 0;

	ptraay = malloc(size * sizeof(char));

	if (ptraay == NULL)
	{
		return (NULL);
	}

	while (length < size)
	{
		ptraay[length] = c;
		length++;
	}

	return (ptraay);
}

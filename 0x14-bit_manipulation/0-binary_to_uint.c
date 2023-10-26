#include "main.h"
#include <stdio.h>
/**
  * binary_to_uint - converts a binary number
  * @b: character string to convert
  * Return: the converted string or 0
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != 'o' && *b != '1')
		{
			return (0);
		}
		result = result * 2 + (*b - 'o');
		b++;
	}
	return (result);
}

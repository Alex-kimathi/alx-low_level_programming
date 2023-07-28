#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * @n: interger
 * Return: pointer to resulting string `dest`
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (c = 0; c < n && src[c] != '\0'; c++, i++)
	{
		dest[i] = src[c];
	}
	dest[i] = '\0';
	return (dest);
}

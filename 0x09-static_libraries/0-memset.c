#include "main.h"
/**
  * _memset - Fills the memory
  *
  * @b: bytes to fill the memory
  * @n: number of times
  * @s: memory area
  * Return: s success
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

#include "main.h"

/**
  * _strlen - prints lenths of a string
  *@s: character to be tested
  *
  * Return: 0 success
  */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)

	{

		length++;
	}
	return (length);
}

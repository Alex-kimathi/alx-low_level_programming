#include "main.h"

/**
  * _strlen - prints lenths of a string
  *@s: character to be tested
  *
  * Return: 0 success
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
{
	i++;
}
	return (i);
}

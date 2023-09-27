#include "main.h"
#include <stddef.h>
/**
  * _strchr - locates a character string
  * @c: charcater to be located
  * @s: string to find character
  * Return: null or character
  */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}

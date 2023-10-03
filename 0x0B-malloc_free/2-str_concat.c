#include "main.h"
#include <string.h>
/**
  * str_concat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * Return: pointer to the newly string
  */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	if (s1 == NULL)
	{
		;
	}
	if (s2 == NULL)
	{
		;
	}

	ptr = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (ptr != NULL)
	{
		strcpy(ptr, s1);
		strcat(ptr, s2);
	}

	return (ptr);
	free(ptr);
}

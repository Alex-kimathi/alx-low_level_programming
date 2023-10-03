#include "main.h"
#include <string.h>
/**
  * _strdup - create an array
  * @str: the string
  * Return: pointer to the newly allocated space
  */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	ptr = (char *)malloc(strlen(str) + 1);

	if (ptr != NULL)
	{
		strcpy(ptr, str);
	}

	return (ptr);
	free(ptr);
}

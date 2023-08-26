#include <stdlib.h>
#include "main.h"
/**
  * _strdup - contains copy of a string
  * @str: string to copy
  * Return: pointer to new string
  */
char *_strdup(char *str)
	{
		char *c;
		unsigned int i, leng;

		i = 0;
		leng = 0;

		if (str == NULL)
			return (NULL);

		while (str[leng])
			leng++;
		c = malloc(sizeof(char) * (leng + 1));

		if (c == NULL)
			return (NULL);

		while ((c[i] = str[i]) != '\0')
			i++;

		return (c);
	}

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * str_concat - concantes two strings
  * @s1: first string
  * @s2: second string
  * Return: pointer to new strings
  */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int i, k, leng1, leng2;

	i = 0;
	k = 0;
	leng1 = 0;
	leng2 = 0;

	while (s1 && s1[leng1])
		leng1++;
	while (s2 && s2[leng2])
		leng2++;

	s3 = mallc(sizeof(char) * (leng1 + leng2 + 1));
	if (s3 == NULL)
		return (NULL);

	if (s1)
	{
		while (i < leng1)
		{
			s3[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (leng1 + leng2))
		{
			s3[i] = s2[k];
			i++;
			k++;
		}
		s3[i] = '\0';
		return (s3);
	}
}

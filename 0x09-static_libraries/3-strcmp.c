#include "main.h"
/**
  * _strcmp - compares to strings
  * @s1: pointer to the first string
  * @s2: pointer to the second string
  * Return: -ve of s1 is less than s2, +ve vice versa
  * and 0 if there is no difference
  */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}

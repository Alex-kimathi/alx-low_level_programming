#include "main.h"
/**
  * string_nconcat - concates two strings
  * @s1: base string
  * @s2: other arguement
  * @n: iterator
  * Return: memory address or NULL if fails
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	usigned int len1, len2, conca_len;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	concat_len = len1 + n;

	concatenated = malloc(concat_len + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strncat(concatenated, s2, n);

	return (concatenated);
}

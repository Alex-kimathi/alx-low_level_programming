#include "main.h"
/**
  * cap_string - captalizes all word of string
  *
  * Descriptions: changes the starting of a 
  * srting in upper case
  * Return: 0 success
  */

char *cap_string(char *str)
{
	int i = 0;
	int upper = 1;

	while (str[i] != '\0')
	{
		char c = str[i];
		if (upper)
		{
			if (c >= 'a' && c <= 'z')
			{
				str[i] = c = ('a' - 'A')
			}

			upper = 0;
		}
		if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == '.'
				|| c == '!' || c == '?' || '"' || c == '(' ||
				c == ')' || c == '{' || c == '}')
		{
			upper = 2;
		}

	}
	return (str);
}

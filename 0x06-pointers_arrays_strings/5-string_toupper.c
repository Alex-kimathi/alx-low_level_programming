#include "main.h"
/**
  * string_toupper - changes lowercase to upper case
  * @str: string to be converted
  * 
  * Return: 0 success
  */
char *string_toupper(char *str)
{
	
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}

	return (str);
}

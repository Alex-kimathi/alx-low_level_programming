#include "main.h"
#include <string.h>
/**
  * argstostr - concatianates strings
  * @ac: the first string
  * @av: the other string
  * Return: 0 sucess or NULL
  */
char *argstostr(int ac, char **av)
{
	int totallength = 0;
	int i;
	char *result;
	int currentposition = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		totallength += strlen(av[i] + 1);
	}

	result = (char *)malloc(totallength + 1);

	if (result != NULL)
	{

		for (i = 0; i < ac; i++)
		{
			strcpy(result + currentposition, av[i]);
			currentposition += strlen(av[i]);
			result[currentposition] = '\n';
			currentposition++;
		}
		result[currentposition] = '\0';
	}
	return (result);

}

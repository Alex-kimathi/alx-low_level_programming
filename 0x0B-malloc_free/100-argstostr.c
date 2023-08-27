#include "main.h"
#include <stdlib.h>
/**
  * argstostr - concatenates all the arguments
  * @ac: first argument
  * @av: pointer to concatinated argument
  * Return: Null if 0, or pointer to string
  */
char *argstostr(int ac, char **av)
{
	int m, n, o, num1;
	char *parray;

	if (ac == 0 || av == NULL)
		return (NULL);


	num1 = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
			num1++;
		num1++;
	}


	parray = malloc((sizeof(char) * num1) + 1);
	if (parray == NULL)
		return (NULL);

	o = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n]; n++)
		{
			parray[o] = av[m][n];
			o++;
		}

	parray[o] = '\n';
	o++;
	}

	parray[o] = '\0';
	return (parray);
}

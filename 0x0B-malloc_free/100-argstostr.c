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

	num1 = 0;
	o = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	m = 0;
	while (m < ac)
	{
		n = 0;
		while (av[m][n])
		{
			num1++;
			n++;
		}
		num1++;
		m++;
	}
	parray = malloc((sizeof(char) * num1) + 1);
	if (parray == NULL)
		return (NULL);
	m = 0;
	while (m < ac)
	{
	while (av[m][n])
	{
		parray[o] = av[m][n];
		n++;
		o++;
	}
	parray[o] = '\n';
	o++;
	m++;
	}
	parray[o] = '\0';
	return (parray);
}

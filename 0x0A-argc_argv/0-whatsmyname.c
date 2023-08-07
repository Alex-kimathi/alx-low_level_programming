#include "main.h"
#include <stdio.h>
/**
  * main - prints its name
  * @argc: arguements integer
  * @argv: arguement character array
  * Return: its name
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

	printf("%s\n", argv[0]);
	}
	return (0);
}


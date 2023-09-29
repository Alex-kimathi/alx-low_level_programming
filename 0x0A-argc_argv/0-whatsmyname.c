#include <stdio.h>
/**
  * main - prints its name
  *
  * @argc: counts number of arguements
  * @argv: array of strings
  * Return: 0 success
  */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

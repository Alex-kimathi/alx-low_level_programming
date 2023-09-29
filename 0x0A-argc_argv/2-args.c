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
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}

	return (0);
}

#include "main.h"

/**
  * main - Entry point
  *
  * Description: prints lowercase aplhabet
  *
  * Return: 1 success or 0 fail
  */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}

#include "main.h"

/**
  * _puts - prints a string to stdout.
  * @str: string to be rpinted
  * Return: 0 succes
  */

voit _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);

	}
	_putchar('\n');
}

#include "main.h"
/**
  * print_sign - prints sign of a number
  *
  * @c: number to be checked
  *
  * Return: 1 if +ve, 0 if 0 otherwise -ve 1
  */

int print_sign(int c)
{
	if (c >= 1)

	{

		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_puthcar('0')
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

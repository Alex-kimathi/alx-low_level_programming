#include "main.h"
/**
  * _pow_recursion - returns the power of two numbers
  * @x: the base number
  * @y: the power number
  *
  * Return: x^y or -1 if y is less than 0
  */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{

		return (x * _pow_recursion(x, y - 1));
	}
}

#include "main.h"
/**
  * _pow_recursion - calculates a num raised to another num
  * @x: base number
  * @y: power number
  * Return: the valueof num
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * _pow_recursion(x, y - 1));
}

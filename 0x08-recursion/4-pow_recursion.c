#include "main.h"
/**
  * _pow_recursion - calculates a num raised to another num
  * @x: base number
  * @y: power number
  * Return: the valueof num
  */
int _pow_recursion(int x, int y)
{
	if (y < -1)
		return (-1);

	if (x == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

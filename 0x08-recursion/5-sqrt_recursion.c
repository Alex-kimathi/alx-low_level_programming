#include "main.h"
/**
  * _sqrt_recursion - calculates the square root of a number
  * @n: the number passed
  * Description: the number should be a natural number
  * Return: sqaureroot or -1 for negative numbers
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (square(n, 1));
	}
}

/**
  * square - helper function calculate the squaroot
  * @n: the number
  * @y: current geuss of the square
  * Return: natural square of x or -1
  */

int square(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else
	{
		return (square(n, y + 1));
	}
}

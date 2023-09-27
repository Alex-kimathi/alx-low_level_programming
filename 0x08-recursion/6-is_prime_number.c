#include "main.h"
/**
  * is_prime_number - looks for a prime number
  * @n: the number
  * Return: 1 if prime number or 0 otherwise
  */
int is_prime_number(int n)
{
	return (is_prime_number_recursive(n, 3));
}
/**
  * is_prime_number_recursive - helper function
  * @i: current divisor
  * @n: number to check
  * Return: prime number
  */

int is_prime_number_recursive(int n, int i)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_recursive(n, i + 2));
	}
}

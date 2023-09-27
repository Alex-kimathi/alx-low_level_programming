#include "main.h"
/**
  * is_prime_number - looks for a prime number
  * @n: the number
  * Return: 1 if prime number or 0 otherwise
  */

int is_prime_number(int n)
{
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
	for (int i = 3; i * i <= n; += 2)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

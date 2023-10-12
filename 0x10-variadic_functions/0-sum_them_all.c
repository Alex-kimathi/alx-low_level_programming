#include "variadic_functions.h"
/**
  * sum_them_all - sum of all parameters
  * @n: the first argument
  * Return: the sum or 0 if fails
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int sum;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);

}

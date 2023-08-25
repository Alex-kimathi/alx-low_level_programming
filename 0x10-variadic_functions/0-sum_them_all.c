#include "variadic_functions.h"

/**
  * sum_them_all - sums all the arguements
  * @n: first arguement
  * Return: 0 succes
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list arg_values;

	va_start(arg_values, n);

	for (i = 0; i < n; i++)

		sum += va_arg(arg_values, int);

	va_end(arg_values);

	return (sum);
}

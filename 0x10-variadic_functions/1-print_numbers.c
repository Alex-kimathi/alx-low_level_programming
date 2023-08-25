#include "variadic_functions.h"
/**
  * print_numbers - print numbers
  * @separator: the string to be printed btn nums
  * @n: number of args passed
  * Return: 0 success
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_values;

	va_start(arg_values, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(arg_values, int));
		else if (separator && i == 0)
			printf("%d", va_arg(arg_values, int));
		else
			printf("%s%d", separator, va_arg(arg_values, int));

	}
	va_end(arg_values);
	printf("\n");
}


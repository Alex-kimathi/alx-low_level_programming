#include "variadic_functions.h"
/**
  * print_strings - print strings
  * @separator: the string to be printed btn strings
  * @n: number of args passed
  * Return: 0 success
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list arg_values;

	va_start(arg_values, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_values, char*);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);

	}
	va_end(arg_values);
	printf("\n");
}


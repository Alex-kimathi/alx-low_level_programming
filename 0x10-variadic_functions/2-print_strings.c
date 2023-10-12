#include "variadic_functions.h"
/**
  * print_strings - print all strings
  * @n: start of variadic function
  * @separator: the separator string
  * Return: nothing or nil
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nill)");
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");

}

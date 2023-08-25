#include "variadic_functions.h"
/**
  * print_all - prints all formats
  * @format: types of formats passsed
  * Return: 0 sucess
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str1, *str2 = "";

	va_list arg_values;

	va_start(arg_values, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", str2, va_arg(arg_values, int));
				break;
			case 'i':
				printf("%s%d", str2, va_arg(arg_values, int));
			case 'f':
				printf("%s%f", str2, va_arg(arg_values, double));
			case 's':
				printf("%s%s", str2, str1);
				if (!str1)
					str1 = "(nil)";
				printf("%s%s", str1, str2);
				break;
			default:
				i++;
				continue;
			}
			str2 = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg_values);
}

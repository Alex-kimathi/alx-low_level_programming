#include "variadic_functions.h"
/**
  * print_all - print all strings
  * @format: the starter string
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		if (i > 0)
		{
			printf(", ");
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);

				if (str == NULL)
				{
					printf("(nil)");
				}
				else
					printf("%s", str);
				break;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * Return: 0 success
 */

void print_alphabet_x10(void)
{

	char i;
	int n = 1;

	while (n <= 10)
	{

		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		n++;
	}
}

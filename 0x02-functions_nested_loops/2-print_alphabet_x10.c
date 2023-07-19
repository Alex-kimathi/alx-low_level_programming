#include "main.h"
/**
 * print_alphabet_x10 - function
 *
 * @c: The character to evaluate
 *
 * Return: Get 1 if c is uppercase,
 * get 0 otherwise
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

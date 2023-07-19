#include "main.h"
/**
  * print_last_digit - function
  *
  * @n: chacter in question
  * Return: last digit of number
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	_putchar(last + '0');
	return (last);
}

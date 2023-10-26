#include "main.h"
#include <stdio.h>
/**
  * print_binary - prints binary number
  * @n: the char
  * Return: 0 always success
  */
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');

}

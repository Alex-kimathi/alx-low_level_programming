#include "main.h"
#include <stdio.h>
/**
  * get_bit - return the value of a bit at a given index
  * @n: the number to extract bit from
  * @index: the index of the bit starting from 0
  *
  * Return: the value of bit at index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	return (n & mask ? 1 : 0);
}

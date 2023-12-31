#include "main.h"
#include <stdio.h>
/**
  * clear_bit - set the value of a bit to 0 at a given index
  * @n: pointer to the number to modify
  * @index: the index of the bit starting from 0
  *
  * Return: 1 or -1 if it fails
  */
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n = *n & ~(1UL << index);

	return (1);
}

#include "main.h"
/**
  * flip_bits - returns the num of bits needed to flipget
  * @n: the first number
  * @m: the second number
  * Return: the number of bits needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

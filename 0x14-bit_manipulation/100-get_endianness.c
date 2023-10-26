#include "main.h"
/**
  * get_endianness - checks the endianness of the system
  *
  * Return: 0 if big endianness,1 if little
  */

int get_endianness(void)
{
	unsigned int num = 1;
	char *endiancheck = (char *)&num;

	return (*endiancheck == 1);
}

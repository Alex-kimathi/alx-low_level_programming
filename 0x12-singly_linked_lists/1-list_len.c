#include "lists.h"

/**
  * list_len - returns number of elements
  * @h: patameter to test
  * Return: number of elements
  */

size_t list_len(const list_t *h)
{
	const list_t *n;
	unsigned int count = 0;

	n = h;
	while (n)
	{
		count++;
		n = n->next;
	}
	return (count);
}

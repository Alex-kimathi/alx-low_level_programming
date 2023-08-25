#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of list
  * @h: parameter to test
  *
  * Return: null when str is 0
  */

size_t print_list(const list_t *h)
{
	size_t sta = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil\n)");

		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		sta++;
	}

	return (sta);
}

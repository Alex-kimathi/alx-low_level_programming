#include "lists.h"
/**
  * print_listint - prints all elements of a listint
  * @h: pointer to the head
  *
  * Return: number of nodes in the list
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{

		node_count++;
		h = h->next;
		node_count++;
	}
	return (count);
}

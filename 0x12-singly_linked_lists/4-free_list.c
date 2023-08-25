#include "lists.h"
/**
  * free_list - frees the list_t
  * @head: first node
  * Return: 0 success
  */
void free_list(list_t *head)
{
	list_t *release;

	while (head)
	{
		release = head->next;
		free(head->str);
		free(head);
		head = release;
	}
}

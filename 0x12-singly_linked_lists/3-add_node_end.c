#include "lists.h"
/**
  * add_node_end - add a note at the end
  * @head: start of node
  * @str: test node
  * Return: address of new pointer
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *num1, *num2;
	unsigned int leng = 0;

	if (str == NULL)
		return (NULL);

	num1 = malloc(sizeof(list_t));
	if (num1 == NULL)
		return (NULL);

	num1->str = strdup(str);
	if (num1->str == NULL)
	{
		free(num1);
		return (NULL);
	}
	while (str[leng])
		leng++;
	num1->len = leng;
	num1->next = NULL;

	if (*head == NULL)
	{
		*head = num1;
		return (num1);
	}

	num2 = *head;
	while (num2->next)
		num2 = num2->next;
	num2->next = num1;

	return (num1);
}

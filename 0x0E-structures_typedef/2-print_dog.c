#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_dog - my sruct
  * @d: name of char type
  *
  * Description: prints struct dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
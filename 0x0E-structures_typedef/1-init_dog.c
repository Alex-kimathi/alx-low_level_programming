#include "dog.h"
#include <stdio.h>

/**
  * init_dog - my sruct
  * @d: name of char type
  * @age: age of the dtruct
  * @name: float type
  * @owner: char pointer
  *
  * Description: struct that has the above elements
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d == malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

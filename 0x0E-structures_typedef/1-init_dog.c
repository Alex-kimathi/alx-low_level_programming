#include "dog.h"
/**
  * init_dog - initializes the struct dog
  * @d: pointer
  * @name: name
  * @age: age
  * @owner: owner
  * Rerurn: 0 success
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

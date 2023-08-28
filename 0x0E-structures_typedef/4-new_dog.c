#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  * new_dog - my sruct
  * @name: name of string
  * @age: char fo struct
  * @owner: char arguemnent
  * Description: prints struct dog
  * Return: null when fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d = (dog_t *)malloc(sizeof(dog_t));

	if (new_d == NULL)
	{
		return (NULL);
	}

	new_d->name = (char *)malloc(strlen(name) + 1);
	new_d->owmer = (char *)malloc(strlen(owner) + 1);

	if (new_d->name == NULL || new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}

	strcpy(new_d->name, name);
	new_d->age = age;
	strcpy(new_d->owner, owner);

	return (new_d);
}

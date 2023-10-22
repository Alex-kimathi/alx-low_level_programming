#ifndef DOG_H
#define DOG_H
/**
  * struct dog - structure
  * Description: creates sipmle elements
  * @name: 1 element
  * @age: 2nd element
  * @owner: 3rd element
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

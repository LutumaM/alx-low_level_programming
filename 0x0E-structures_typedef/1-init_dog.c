#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialises a variable of type struct dog
 * @d: pointer to  struct dog
 * @name: pointer to a string
 * @age: float
 * @owner: pointer to string
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

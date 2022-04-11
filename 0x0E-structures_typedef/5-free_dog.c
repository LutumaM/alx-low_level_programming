#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees the dog
 * @d: pointer
 *
 * Return: ...
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

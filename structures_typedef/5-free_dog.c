#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - frees everything
 * @d: pointer
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		exit(0);
	}
	free(d->name);
	free(d->owner);
	free(d);
}

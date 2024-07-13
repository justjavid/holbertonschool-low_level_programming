#include "dog.h"
#include <stdio.h>

/**
 *  init_dog - initialize variable in struct dog type
 *  @d: pointer
 *  @name: name of dog
 *  @age: age of dog
 *  @owner: owner of dog
 *  *Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		printf("Ok");
		return (1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  new_dog - print variable's elements given format
 *  @d: pointer to struct dog variable
 *  Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * name_cpy - func
 * @name: pointer
 * Return: name copy
 */
char *name_cpy(char *name)
{
	char *n;
	int i;

	i = 0;
	while (name[i] != 0)
	{
		i++;
	}
	n = malloc(i + 1);
	if (n == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (name[i] != 0)
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}

/**
 * owner_cpy - func
 * @owner: pointer
 * Return: owner copy
 */
char *owner_cpy(char *owner)
{
	char *o;
	int i;

	i = 0;
	while (owner[i] != 0)
	{
		i++;
	}
	o = malloc(i + 1);
	if (o == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (owner[i] != 0)
	{
		o[i] = owner[i];
		i++;
	}
	o[i] = '\0';
	return (o);
}
/**
 *  new_dog - print variable's elements given format
 *  @name: name of dog
 *  @age: age of dog
 *  @owner: owner of dog
 *  Return: structure dog new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *n;
	char *o;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}
	n = name_cpy(name);
	o = owner_cpy(owner);
	if (n == NULL || o == NULL)
	{
		free(o);
		free(n);
		free(dog);
		return (NULL);
	}
	dog->name = n;
	dog->age = age;
	dog->owner = o;
	return (dog);
}

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  new_dog - print variable's elements given format
 *  @name: name of dog
 *  @age: age of dog
 *  @owner: owner of dog
 *  Return: structure dog new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *dog;
	char *n;
	char *o;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);	
		return (NULL);
	}
	i = 0;
	while (name[i] != 0)
	{
		i++;
	}
	n = malloc(i + 1);
	if (n == NULL)
	{
		free(n);
		free(dog);
	}
	i = 0;
	while (name[i] != 0)
	{
		n[i] = name[i];
		i++;
	}
	n[i] = '\0';
	dog->name = n;
	dog->age = age;
	i = 0;
	while (owner[i] != 0)
        {
                i++;
        }
	o = malloc(i + 1);
	if (o == NULL)
        {
                free(o);
		free(n);
                free(dog);
        }
        i = 0;
        while (owner[i] != 0)
        {
                o[i] = owner[i];
		i++;
        }
        o[i] = '\0';
	dog->owner = o;
	return (dog);
}

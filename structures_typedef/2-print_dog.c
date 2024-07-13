#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  print_dog - print variable's elements given format
 *  @d: pointer to struct dog variable
 *  Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
		exit(1);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}

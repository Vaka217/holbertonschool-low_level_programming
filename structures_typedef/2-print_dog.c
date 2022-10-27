#include "dog.h"
#include <stdio.h>

/**
  * print_dog - prints a struct dog.
  * @d: Pointer to a struct dog.
  *
  */

void print_dog(struct dog *d)
{
	char *name = d->name, *owner = d->owner;
	float age = d->age;

	if (d)
	{
		if (name)
			printf("Name: %s\n", name);
		else
			printf("Name: (nil)\n");

		printf("Age: %f\n", age);

		if (owner)
			printf("Owner: %s\n", owner);
		else
			printf("Owner: (nil)\n");
	}
}

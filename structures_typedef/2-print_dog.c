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

	if (d != NULL)
	{
		if (name != NULL)
			printf("Name: %s\n", name);
		else
			printf("Name: (nil)\n");
		if (age != NULL)
			printf("Age: %f\n", age);
		else
			printf("Age: (nil)\n");
		if (owner != NULL)
			printf("Owner: %s\n", owner);
		else
			printf("Owner: (nil)\n");
	}
	else
		printf("");
}

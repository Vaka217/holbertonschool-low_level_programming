#include "dog.h"

/**
  * init_dog - initialize a variable of type struct dog.
  * @d: Pointer to a struct dog;
  * @name: String parameter of a name.
  * @age: Float parameter of an age.
  * @owner: String parameter of an owner.
  *
  * Description: Initialize a variable of type struct dog with name, age
  * and owner.
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}

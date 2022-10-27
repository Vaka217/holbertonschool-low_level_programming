#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcp;
	dogcp = malloc(sizeof(dog_t));

	dogcp->name = name;
	dogcp->age = age;
	dogcp->owner = owner;
	return (dogcp);
}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "1-strdup.c"

/**
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcp;
	char *namecp = NULL, *ownercp = NULL;

	dogcp = malloc(sizeof(dog_t));
	namecp = _strdup(name);
	ownercp = _strdup(owner);

	if (dogcp == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	else
	{
		dogcp->name = namecp;
	}
	if (age == 0)
	{
		free(dogcp);
		return (NULL);
	}
	else
		dogcp->age = age;
	if (owner == NULL)
	{
		free(dogcp);
		return (NULL);
	}
	else
	{
		dogcp->owner = ownercp;
	}
	return (dogcp);
}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "2-strlen.c"
#include "9-strcpy.c"

/**
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcp;
	int ownerlen = 0, namelen = 0;

	if (name != NULL && owner != NULL)
	{
		namelen = _strlen(name) + 1;
		ownerlen = _strlen(owner) + 1;
		dogcp = malloc(sizeof(dog_t));
		if (dogcp == NULL)
			return (NULL);
		dogcp->name = malloc(sizeof(char) * namelen);
		if (dogcp->name == NULL)
		{
			free(dogcp);
			return (NULL);
		}
		dogcp->owner = malloc(sizeof(char) * ownerlen);
		if (dogcp->owner == NULL)
		{
			free(dogcp->name);
			free(dogcp);
			return (NULL);
		}
		dogcp->name = _strcpy(dogcp->name, name);
		dogcp->owner = _strcpy(dogcp->owner, owner);
		dogcp->age = age;
	}
	return (dogcp);
}

#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
  *
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcp;
	char *namecp, *ownercp;

	dogcp = malloc(sizeof(dog_t));

	if (dogcp == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	else
	{
		namecp = name;
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
		ownercp = owner;
		dogcp->owner = ownercp;
	}
	return (dogcp);
}

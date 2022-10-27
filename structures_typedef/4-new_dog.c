#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include "1-strdup.c"

/**
  * new_dog - creates a new dog.
  * @name: Name of the dog.
  * @age: Age of the dog.
  * @owner: Owner of the dog.
  *
  * Return: A pointer to a copy of dog_t, or NULL if it fails.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogcp;

	if (name != NULL && owner != NULL)
	{
		dogcp = malloc(sizeof(dog_t));
		if (dogcp == NULL)
			return (NULL);
		dogcp->name = _strdup(name);
		if (dogcp->name == NULL)
		{
			free(dogcp);
			return (NULL);
		}
		dogcp->owner = _strdup(owner);
		if (dogcp->owner == NULL)
		{
			free(dogcp->name);
			free(dogcp);
			return (NULL);
		}
		dogcp->age = age;
	}
	return (dogcp);
}

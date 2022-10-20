#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocates memory using malloc.
  * @b: Size bytes for malloc.
  *
  * Return: A pointer to the allocated memory or cause normal process
  * termination with a status value of 98 if malloc fails.
  */

void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);

	if (!m)
		exit(98);
	return (m);
}

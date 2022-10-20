#include "main.h"
#include <stdlib.h>

/**
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (!c)
		return (NULL);
	*c = c[0];
	return (c);
}

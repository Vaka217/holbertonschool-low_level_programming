#include "main.h"
#include <stdlib.h>

/**
  *
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(size * nmemb);
	if (!c)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		c[i] = 0;
	return (c);
}

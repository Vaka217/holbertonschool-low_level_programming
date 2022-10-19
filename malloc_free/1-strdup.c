#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *
  */

char *_strdup(char *str)
{
	char *dup = NULL;
	unsigned long int i = 0, j = strlen(str) + 1;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * j);
	for (i = 0; i <= j; i++)
		dup[i] = str[i];
	if (dup == NULL)
		return (NULL);
	return (dup);
}

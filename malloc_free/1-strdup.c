#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *
  */

char *_strdup(char *str)
{
	char *dup = NULL;
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);
	dup = malloc(sizeof(char) * strlen(str + 1));
	for (i = 0; i <= strlen(str + 1); i++)
		dup[i] = str[i];
	if (dup == NULL)
		return (NULL);
	return (dup);
}

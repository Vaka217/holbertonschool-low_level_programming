#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  *
  */

char *_strdup(char *str)
{
	char *dup = NULL;
	long unsigned int i = 0;

	if (str != NULL)
	{
		dup = malloc(sizeof(char) * strlen(str) + 1);
		for (i = 0; i <= strlen(str); i++)
			dup[i] = str[i];
		dup[i + 1] = '\0';
		return (dup);
	}
	return (NULL);
}

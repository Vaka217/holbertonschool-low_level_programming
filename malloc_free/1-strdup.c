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

	if (str != 0)
	{
		dup = malloc(sizeof(char) * strlen(str));
		for (i = 0; i < strlen(str); i++)
			dup[i] = str[i];
		dup[i + 1] = '\0';
		return (dup);
	}
	return (0);
}

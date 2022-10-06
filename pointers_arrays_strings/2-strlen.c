#include "main.h"

/**
  *
  */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
		count++;
	return (count);
}

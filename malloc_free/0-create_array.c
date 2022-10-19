#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars.
  * @size: Size of the array.
  * @c: Specific char to initialize array.
  *
  * Return: A pointer to the array or NULL if size is equal to 0 or if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *str = NULL;
	unsigned int i = 0;

	if (size != 0)
	{
		str = malloc(sizeof(*str) * size);
		if (str != 0)
		{
			for (i = 0; i <= size; i++)
				str[i] = c;
			return (str);
		}
	}
	return (NULL);
}

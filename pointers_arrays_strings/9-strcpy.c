#include "main.h"

/**
  * 
  */

char *_strcpy(char *dest, char *src)
{
	int i, count = 0;

	while (*(src + count) != '\0')
	{
		count++;
	}
	for(i = 0; i <= count; i++)
		*(dest + i) = *(src + i);
	return (src);
}

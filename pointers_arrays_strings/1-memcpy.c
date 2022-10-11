#include "main.h"

/**
  * *_memset - fills memory with a constant byte.
  * @s: Pointer to array.
  * @b: Constant byte.
  * @n: First n bytes.
  *
  * Description: fills the first n bytes of the memory area pointed to by s
  * with the constant byte c.
  * Return: A pointer to the memory area s.
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *init = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}
	return (init);
}

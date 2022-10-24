#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: Pointer to the memory previously allocated with malloc(old_size).
  * @old_size: Size in bytes of the allocated space for ptr.
  * @new_size: New size in bytes of the new memory block.
  *
  * Return: If new_size is 0, returns NULL. Otherwise, returns ptr.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}

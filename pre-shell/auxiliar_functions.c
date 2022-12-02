#include "main.h"
#include <string.h>
/**
  * _realloc - reallocates a memory block using malloc and free.
  * @ptr: Pointer to the memory previously allocated with malloc(old_size).
  * @old_size: Size in bytes of the allocated space for ptr.
  * @new_size: New size in bytes of the new memory block.
  *
  * Return: If new_size is 0, returns NULL. Otherwise, returns ptr.
  */

void *_realloc(void *ptr, size_t originalLength, size_t newLength)
{
	void *ptrNew = malloc(newLength);

	if (newLength == 0)
	{
		free(ptr);
		return NULL;
	}
	else if (!ptr)
	{
		return malloc(newLength);
	}
	else if (newLength <= originalLength)
	{
		return ptr;
	}
	else
	{
		if (ptrNew)
		{
			_memcpy(ptrNew, ptr, originalLength);
			free(ptr);
		}
		return ptrNew;
	}
}

char *pathfinder(char *str)
{
	char *p = _getenv("PATH"), *dup2 = _strdup(p);
	char *token = strtok(dup2, ":"), *dup = NULL;
	struct stat st;

	while (token)
	{
		dup = _strdup(token);
		dup = _realloc(dup, _strlen(dup) + 1, _strlen(dup) + 2);
		_strcat(dup, "/");
		dup = _realloc(dup, _strlen(dup) + 1, _strlen(dup) + 1 + _strlen(str));
		_strcat(dup, str);
		if (stat(dup, &st) == 0)
		{
			free(dup2);
			return (dup);
		}
		token = strtok(NULL, ":");
		free(dup);
	}
	free(dup2);
	return (str);
}

void _printenv(void)
{
	int i;

	for (i = 0; environ[i] != NULL; i++)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, "\n", 1);
	}
}

char *_getenv(const char *name)
{
	int i;
	char *dup;

	for (i = 0; environ[i]; i++)
	{
		dup = _strdup(environ[i]);
		strtok(dup, "=");
		if (strcmp(dup, name) == 0)
		{
			dup = strtok(NULL, "=");
			return(dup);
		}
		free(dup);
	}
	return (NULL);
}

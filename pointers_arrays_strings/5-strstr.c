#include "main.h"

/**
  * *_strpbrk - searches a string for any of a set of bytes.
  * @s: String parameter.
  * @accept: String for set of bytes.
  *
  * Description: Locates the first occurrence in the string s of any of the
  * bytes in the string accept.
  * Return: a pointer to the byte in s that matches one of the bytes in accept,
  * or NULL if no such byte is found.
  */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *needle)
			return (haystack + i);
		i++;
	}
	if (*(haystack + i) == *needle)
		return (haystack + i);
	return (NULL);
}

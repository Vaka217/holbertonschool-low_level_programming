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
	int i = 0, j = 0, len = 0;

	for (i = 0; needle[i + 1] != '\0'; i++)
		len++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[j])
			j++;
		if (haystack[i] == 32)
			j = 0;
		if (j > 0 && (haystack[i + 1] == '\0' || haystack[i + 1] == 32))
			return (haystack + i - len);
	}
	return (NULL);
}

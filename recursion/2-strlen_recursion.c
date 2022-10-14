#include "main.h"
#include <string.h>

/**
  * _print_rev_recursion - prints a string in reverse..
  * @s: String to print.
  */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return 0;
}

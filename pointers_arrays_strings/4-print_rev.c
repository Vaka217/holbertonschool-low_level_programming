#include "main.h"

/**
  * _puts - prints a string in reverse.
  * @s: string parameter.
  *
  * Description: Prints a string in reverse followd by a new line to stdout.
  * Return: void.
  */

void print_rev(char *s)
{
	int i = 0;

	for (i = s[i]; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

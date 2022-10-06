#include "main.h"

/**
  * _puts - prints a string in reverse.
  * @s: string parameter.
  *
  * Description: Prints a string in reverse followd by a new line to stdout.
  * Return: void.
  */

vid print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

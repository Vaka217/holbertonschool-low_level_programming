#include "main.h"

/**
  * print_rev - prints a string in reverse.
  * @s: string parameter.
  *
  * Description: Prints a string in reverse followd by a new line to stdout.
  * Return: void.
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	for (i = i; i >= 0; i--)
		if (s[i] != '\0')
			_putchar(s[i]);
	_putchar('\n');
}

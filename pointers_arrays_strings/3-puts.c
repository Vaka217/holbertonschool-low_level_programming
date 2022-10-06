#include "main.h"

/**
  * _puts - prints a string.
  * @str: string parameter.
  *
  * Description: Prints a string followd by a new line to stdout.
  * Return: void.
  */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);
	_putchar('\n');
}

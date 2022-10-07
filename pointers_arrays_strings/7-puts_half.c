#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: string parameter
  *
  * Description: Prints the second half of a string followed by a new line.
  * Return: void.
  */

void puts_half(char *str)
{
	int i, count = 0;

	while (str[count] != '\0')
		count++;
	if (count % 2 != 0)
		count = count + 1;
	for (i = count / 2; i <= count; i++)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
	}
	_putchar('\n');
}

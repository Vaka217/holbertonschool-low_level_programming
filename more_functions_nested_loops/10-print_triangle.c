#include "main.h"

/**
  * print_triangle - prints a square using '#'
  * @size: size of square
  *
  * Description: prints a square where '#' is the length of its sides.
  * If size is 0 or less, only prints a new line.
  * Return: void.
  */

void print_triangle(int size)
{
	int x, i, c;

	for (x = size; x >= 1; x--)
	{
		i = x - 1;
		c = size - i;
		while (i > 0)
		{
			_putchar(32);
			i--;
		}
		while (c > 0)
		{
			_putchar('#');
			c--;
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

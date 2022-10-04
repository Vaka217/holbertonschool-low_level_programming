#include "main.h"

/**
  * print_square - prints a square using '#'
  * @size: size of square
  *
  * Description: prints a square where '#' is the length of its sides.
  * If size is 0 or less, only prints a new line.
  * Return: void.
  */

void print_square(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}

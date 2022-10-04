#include "main.h"
/**
  * print_diagonal - Prints a diagonal line with '\'
  * @n: number of '\'
  *
  * Description: Prints a diagonal line wit '\', with a number of spaces before
  * each '\' starting from 0 to n-1. If n starts as 0 or less, returns a
  * new line.
  * Return: void
  */

void print_diagonal(int n)
{
	int x, y;

	x = 0;

	while (n > 0)
	{
		y = x;
		while (y > 0)
		{
			_putchar(32);
			y--;
		}
		_putchar('\\');
		n--;
		x++;
		_putchar('\n');
	}
	if (x < 1)
	{
		_putchar('\n');
	}
}

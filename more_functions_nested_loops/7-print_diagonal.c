#include "main.h"
#include "_putchar.c"

/**
  *
  */

void print_diagonal(int n)
{
	int g = n;
	if (n > 0)
	{
		while (n > 0)
		{
			while (g - n > 0)
			{
				_putchar(32);
				g--;
			}
			_putchar('\\');
			n--;
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}

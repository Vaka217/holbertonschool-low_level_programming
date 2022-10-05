#include "main.h"

/**
  * print_times_table - prints the n times table.
  * @n: number of times table.
  *
  * Description: Prints the n times table, starting with 0. If n is greater
  * than 15 or less than 0 the function prints anything.
  * Return: void.
  */

void print_times_table(int n)
{
	int f, c, p;

	if (n >= 0 && n <= 15)
	{
		for (f = 0; f <= n; f++)
		{
			_putchar('0');

			for (c = 1; c <= n; c++)
			{
				_putchar(',');
				_putchar(' ');

				p = f * c;

				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');

				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10)) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}

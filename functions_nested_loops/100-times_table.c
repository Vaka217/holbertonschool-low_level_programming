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
	int f, c = 0;

	if ((n <= 15) && (n > 0))
	{
	for (f = 0; f < n + 1; f++)
	{
		for (c = 0; c < n; c++)
		{
			if ((f * c < 10) && (f * (c + 1) >= 10))
			{
				_putchar (f * c + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
			else if (f * c >= 100)
			{
				_putchar (f * c / 100 + '0');
				_putchar ((f * c / 10) % 10 + '0');
				_putchar (f * c % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			else if ((f * c >= 10) && (f * (c + 1) >= 100))
			{
				_putchar (f * c / 10 + '0');
				_putchar (f * c % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			else if (f * c >= 10)
			{
				_putchar (f * c / 10 + '0');
				_putchar (f * c % 10 + '0');
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
			}
			else
			{
			_putchar (f * c + '0');
			_putchar (',');
			_putchar (' ');
			_putchar (' ');
			_putchar (' ');
			}
		}
		if (f * c < 10)
			_putchar (f * c + '0');
		else if (f * c >= 100)
		{
			_putchar (f * c / 100 + '0');
			_putchar (f * c / 10 % 10 + '0');
			_putchar (f * c % 10 + '0');
		}
		else
		{
			_putchar ((f * c) / 10 + '0');
			_putchar ((f * c) % 10 + '0');
		}
		_putchar ('\n');
	}
	}
}

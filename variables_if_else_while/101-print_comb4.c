#include <stdio.h>

/**
  * main - prints all possible different combinations of three digits.
  *
  * Description: Prints all possible different combinations of three digits.
  * xyz, yxz, zxy and yzx are considered the same combination so it only prints
  * the smallest one and all numbers are separated by a comma followed by a
  * space.
  * Return: Always 0.
  */

int main(void)
{
	int x, y, w = 0;

	for (x = 0; x <= 7; x++)
	{
		for (y = 1; y <= 8; y++)
		{
			for (w = 2; w <= 9; w++)
			{
				if ((y > x) && (w > y))
				{
					putchar(x + '0');
					putchar(y + '0');
					putchar(w + '0');
					if ((x != 7) || (y != 8) || (w != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - prints all possible different combinations of two digits.
  *
  * Description: Prints all possible different combinations of two digits.
  * xy and yx are considered the same combination so it only prints the
  * smallest one and all numbers are separated by a comma followed by a space.
  * Return: Always 0.
  */

int main(void)
{
	int x, y, z = 0;

	for (x = 0; x <= 8; x++)
	{
		for (y = 1; y <= 9; y++)
		{
			if((y >= z) && ( y != x))
			{
				putchar(x + '0');
				putchar(y + '0');
				if ((y != 9) || (x != 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}

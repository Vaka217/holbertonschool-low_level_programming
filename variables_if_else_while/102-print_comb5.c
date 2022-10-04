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
	int x, y= 0;

	for (x = 0; x <= 98; x++)
	{
		for (y = x + 1; y <= 99; y++)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if ((x != 98) || (y != 99))
			{							
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

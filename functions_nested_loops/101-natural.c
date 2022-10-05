#include <stdio.h>

/**
  * main - prints the sum of all the multiples of 3 or 5 below 1024.
  *
  * Description: Computes and prints the sum of all the multiples of 3 or 5
  * below 1024 (excluded), followed by a new line.
  * Return: void.
  */

void main(void)
{

	int i, num = 0;

	for (i = 0; i <= 1023; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			num = num + i;
	}
	printf("%d\n", num);
}

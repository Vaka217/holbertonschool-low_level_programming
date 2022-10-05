#include <stdio.h>

/**
  * main - prints the 50 first Fibonacci numbers.
  *
  * Description: Prints the 50 first Fibonacci numbers. t1 and t2 contains
  * the two previous numbers and nextt is the current number to print.
  * Return: Always 0.
  */

int main(void)
{
	int i, t1 = 0;
	int t2 = 1;
	int nextt = t1 + t2;

	for (i = 1; i <= 49; i++)
	{
		printf("%d, ", nextt);
		t1 = t2;
		t2 = nextt;
		nextt = t1 + t2;
	}
	printf("%d\n", nextt);
	return (0);
}


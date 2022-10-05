#include <stdio.h>
#define LONGEST 10000000000
  /** main - prints the 50 first Fibonacci numbers.
  *
  * Description: Prints the 50 first Fibonacci numbers. t1 and t2 contains
  * the two previous numbers and nextt is the current number to print.
  * Return: Always 0.
  */

int main(void)
{
	long int i, t1 = 0;
	long int p1, p2 = 0;
	long int t2 = 1;
	long int nextt = t1 + t2;

	for (i = 1; i <= 92; i++)
	{
		printf("%ld, ", nextt);
		t1 = t2;
		t2 = nextt;
		if (t1 + t2 > LONGEST)
		{
			p1 = (t1 + t2) / LONGEST;
			p2 = (t1 + t2) % LONGEST;
			printf("%ld%ld", p1, p2);
		}
		nextt = t1 + t2;
	}
	printf("%ld\n", nextt);
	return (0);
}


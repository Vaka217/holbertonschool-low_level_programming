#include <stdio.h>
#define LONGEST 10000000000
/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Description: Find and print the first 98 fib numbers starting with 1 and 2.
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int p1 = 0, t1 = 1, p2 = 0, t2 = 2;
	unsigned long int h1, nextt, h3;
	int i;

	printf("%lu, %lu, ", t1, t2);
	for (i = 2; i < 98; i++)
	{
		if (t1 + t2 > LONGEST || p2 > 0 || p1 > 0)
		{
			h1 = (t1 + t2) / LONGEST;
			nextt = (t1 + t2) % LONGEST;
			h3 = p1 + p2 + h1;
			p1 = p2, p2 = h3;
			t1 = t2, t2 = nextt;
			printf("%lu%010lu", p2, t2);
		}
		else
		{
			nextt = t1 + t2;
			t1 = t2, t2 = nextt;
			printf("%lu", t2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

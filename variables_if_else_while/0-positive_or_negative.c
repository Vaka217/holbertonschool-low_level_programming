#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Assigns a random number and prints if the it's positive or negative
  *
  * Description: Assigns a random number to the variable n each time it is
  * executed and the ifs decides if the number is positive, negative or zero.
  * Return: Prints the number and a message depending if it's positive,
  * negative or zero.
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

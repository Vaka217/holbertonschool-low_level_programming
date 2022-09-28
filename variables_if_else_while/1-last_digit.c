#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Check the value of the last digit of n and prints a message
  *
  * Description: Assigns n a random number each time it is executed and
  * prints a message depending if the last digit of n values greater than 5,
  * less than 6 or 0.
  * Return: Prints a message with n, its last digit and if that digit is
  * greater than 5, less than 6 or 0..
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	else
		printf("Last digit of %d is 0 and is 0\n", n);
	return (0);
}

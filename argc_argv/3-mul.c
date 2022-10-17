#include "main.h"

/**
  * main - multiplies two numbers and prints the result.
  * @argc: Count number of arguments.
  * @argv: Array of strings (arguments).
  *
  * Return: 0.
  */

int main(__attribute__ ((unused)) int argc, char **argv)
{
	if (argv[1] != NULL)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");
	return (1);
}

#include <stdio.h>
/**
  * main -  Prints the size of various types.
  *
  * Description: printf() prints a message with the size of each type and each
  * sizeof() gets the value of the size of each type on the computer it is
  * compiled and run on.
  * Return: A message which each line have its own message telling which type
  * is and its size value in byte(s).
  */
int main(void)
{
	printf("Size of a char: %ld byte(s)\nSize of an int: %ld byte(s)\nSize
			of a long int: %ld byte(s)\nSize of a long long int:
			%ld byte(s)\nSize of a float: %ld byte(s)\n",
			sizeof(char), sizeof(int), sizeof(long int),
			sizeof(long long int), sizeof(float));
	return (0);
}

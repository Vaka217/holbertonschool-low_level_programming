#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals of a matrix.
  * @a: Integers of the matrix.
  * @size: Size of the matrix.
  *
  * Description: prints the sum of the two diagonals of a square matrix of
  * integers.
  * Return: void.
  */

void print_diagsums(int *a, int size)
{
	int i = 0, num = 0, num2 = 0;

	for (i = 1; i <= size; i++)
		num += a[i * (size - 1)];
	for (i = 0; i < size; i++)
		num2 += a[i * (size + 1)];
	printf("%d, %d\n", num2, num);
}


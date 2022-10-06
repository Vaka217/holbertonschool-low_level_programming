#include "main.h"

/**
  * swap_int - swaps the values of two integers.
  * @a: integer parameter.
  * @b: integer parameter.
  *
  * Description: swaps the vlues of two integers through their pointers.
  * Return: void.
  */

void swap_int(int *a, int *b)
{
	int tmp = 0;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

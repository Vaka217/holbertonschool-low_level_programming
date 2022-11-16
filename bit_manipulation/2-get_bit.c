#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: Number to print in binary.
  *
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i <= index; i++)
	{
		if (i == index)
			return (n & 1);
		n >>= 1;
	}
	return (-1);
}

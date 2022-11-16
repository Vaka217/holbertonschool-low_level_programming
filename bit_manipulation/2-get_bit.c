#include "main.h"

/**
  * print_binary - prints the binary representation of a number.
  * @n: Number to print in binary.
  *
  */

int get_bit(unsigned long int n, unsigned int index)
{

	if (0x01 << index == 0)
		return (-1);
	return ((n >> index) & 1);
}

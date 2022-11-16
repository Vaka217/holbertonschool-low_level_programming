#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip from n to m.
  * @n: Number one.
  * @m: Number two.
  *
  * Return: returns the number of bits you would need to flip to get from one
  * number to another.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m, count = 0;

	for (; XOR > 0; XOR >>= 1)
		count += (XOR & 1);
	return (count);
}

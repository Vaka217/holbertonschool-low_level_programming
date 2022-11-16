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
	unsigned int count = 0, i;

	for (i = 0; n >> i; i++)
	{
		if (((n >> i) & 1) != ((m >> i) & 1))
			count++;
	}
	return (count);
}

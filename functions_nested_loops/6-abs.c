#include "main.h"
#include <stdio.h>
#include "_abs.c"
/**
 * abs2 - Computes the absolute value of an integer
 *
 * Description: Computes the absolute value of an integer using _abs.
 * _abs checks if x number is negative or positive, if its positive prints x,
 * if not, prints -x.
 * Return: Always 0.
 */
int abs2(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

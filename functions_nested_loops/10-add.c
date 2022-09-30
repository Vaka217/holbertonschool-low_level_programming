#include "main.h"
#include <stdio.h>
#include "_add.c"

/**
 * adds - prints the sum of two integers.
 *
 * Description: Function add returns the sum of two given integers and printf
 * prints the result.
 * Return: Always 0.
 */
int adds(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

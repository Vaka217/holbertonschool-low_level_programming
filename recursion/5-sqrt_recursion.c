#include "main.h"

int sqrt_added(int x, int y)
{
	if (x == y * y)
		return (y);
	else if (x < y * y)
		return (-1);
	else
		return (sqrt_added(x, y + 1));
}
int _sqrt_recursion(int n)
{
	return (sqrt_added(n, 0));
}

#include "main.h"

void reverse_array(int *a, int n)
{
	long int i;
	char tmp;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		tmp = a[i];
        	a[i] = a[n];
		a[n] = tmp;
        	n--;
    	}
}

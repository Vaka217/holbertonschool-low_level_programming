#include "main.h"

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n - 1; i++)
	{
		tmp = a[n - 1];
        	a[n - 1] = a[i];
		a[i] = tmp;
        	n--;
    	}
}

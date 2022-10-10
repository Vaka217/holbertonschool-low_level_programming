#include "main.h"

void reverse_array(int *a, int n)
{
	n = n - 1;
	while (n >= 0)
	{
        	printf("%d", a[n]);
		if (n != 0)
			printf(", ");
        	n--;
    	}
	printf("\n");
}

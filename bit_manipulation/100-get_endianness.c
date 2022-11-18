#include <stdint.h>
#include <stdio.h>
int get_endianness(void)
{
	int i = 1;
	int *ptr = &i;

	if (ptr[0] == 1)
		return (1);
	return 0;
}

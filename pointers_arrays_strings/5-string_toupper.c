#include "main.h"

char *string_toupper(char *str)
{
	char *init = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (init);
}

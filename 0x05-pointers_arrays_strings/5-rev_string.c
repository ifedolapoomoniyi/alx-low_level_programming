#include "main.h"

/**
 * rev_string - reversed a given string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i = 0;
	char str;

	while (s[i])
		i++;
	while (i >= 0)
	{
		str = str + s[i];
	}

	s = str;
}

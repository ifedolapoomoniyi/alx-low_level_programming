#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string pointer to be searched
 * @accept: The string pointer to be searched for
 * Return: a pointer to the matched byte or null other wise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (accept[i])
		{
			if (*s == accept[i])
				return (s);
			i++;
		}

		s++;
	}
	return ('\0');
}

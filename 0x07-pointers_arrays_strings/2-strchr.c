#include "main.h"

/**
 * strchr - Locates a character in a string
 * *@c: Character to be located
 * *@s: string where character is stored
 * Return: A pointer to the first occurence of the char stored in c
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

	return (NULL);
}

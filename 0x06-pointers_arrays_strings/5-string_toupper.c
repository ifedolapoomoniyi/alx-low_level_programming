#include "main.h"

/**
 * string_toupper - function to change lowerase letters to uppercase
 * @s: string to change
 * Return: returns the changed string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if ((*s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}

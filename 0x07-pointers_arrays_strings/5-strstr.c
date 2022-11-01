#include "main.h"

/**
 * _strstr - finds the first occurence of the suBstring @needle in the haystack
 * @needle: substring to be located
 * @haystack: location of substring needle
 * Return: pointer to the beginning of locaated substring,
 * Null if substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
					return (haystack);
			}
			i++;
		}

		haystack++;
	}
	return ('\0');
}


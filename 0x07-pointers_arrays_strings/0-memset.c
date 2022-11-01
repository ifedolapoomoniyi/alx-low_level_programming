#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * *@s: the function accepts an input saved into c
 * *@b: the function accepts an input saved into b
 * *@n: the function accepts an input saved into n
 * Return: A given char as success
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}


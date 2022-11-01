#include "main.h"

/**
 * _memcpy - Copies bytes from a memory area
 * *@dest: the function accepts an input saved into dest
 * *@src: accepts an input saved into src
 * *@n: accepts an input saved into n
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}


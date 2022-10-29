#include "main.h"

/**
 * _strncat - function to append strings
 * @dest: string to append by src
 * @src : string to append by dest
 * @n: number of bytes, determines wheter to add terminating character if by
 * te limite exceeded
 * Return: The address of dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	if (j < n)
		*(dest + i) = *(src + j);

	return (dest);
}


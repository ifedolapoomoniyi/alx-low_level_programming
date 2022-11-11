#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memotry
 * @b: amount of bytes
 * Return: a pointer to the allocated memory
 * if malloc fails, status value is equal to 98.
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}

#include <stdio.h>
#include "main.h"

/**
 * mul - multiplies two integers together
 * @a: parameter to be multiplied
 * @b: parameter to be multiplied
 * Return: 0 means success
 */

int mul(int a, int b)
{
	int c;

	c = a * b;

	printf("%d\n", c);

	return (0);
}

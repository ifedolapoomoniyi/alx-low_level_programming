#include <stdio.h>
#include "main.h"

/**
 * swap_int - switches the value of two integers
 * @a: parameter for value to be swapped
 * @b: parameter for value to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}

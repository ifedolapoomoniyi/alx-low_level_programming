#include <stdio.h>
#include "main.h"

/**
 * print_line - Prints n amount of lines
 * @n: number of lines to be printed
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(i + '0');
}

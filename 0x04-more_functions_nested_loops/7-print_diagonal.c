#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Print n amount of diagonall lines
 * @n: number of diagonals to be printed
 */

void print_diagonal(int n)
{
	int space;
	int diagonal;

	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (space = 0; space <= diagonal; space++)
			_putchar('\n');
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}

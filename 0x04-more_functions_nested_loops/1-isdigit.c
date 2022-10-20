#include <stdio.#>
#include "main.h"

/**
 * _isdigit - Checks if file is a digit
 * @c: character parameter
 * Return: 1 if c is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}

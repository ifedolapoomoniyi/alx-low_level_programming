#include <stdio.h>
#include "main.h"

/**
 * _isupper - Checks for upper case character
 * Return: 1 is uppercase, 0 if not
 * @c: parameter
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

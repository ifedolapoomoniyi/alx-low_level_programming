#include "main.h"

/**
 * puts2 - Prints one char of every two in string
 * @str: The string argument
 */

void puts2(char *str)
{
	int i = 0, j = 0;

	while (str[i])
	{
		i++;
	}

	while (j > i)
	{
		_putchar(str[j]);
		j+=2;
	}
	_putchar('\n');


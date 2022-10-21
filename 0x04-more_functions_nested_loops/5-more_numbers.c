#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Print 14 numbers 10 times
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = '1'; i <= '10'; i++)
	{
		for (j = '0'; j <= '14'; i++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

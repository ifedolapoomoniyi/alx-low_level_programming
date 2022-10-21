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
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
	_putchar('\n');
}

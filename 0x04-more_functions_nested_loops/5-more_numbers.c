#include "main.h"

/**
 * more_numbers - Print 14 numbers 10 times
 */

void more_numbers(void)
{
	int i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j / 10 > 0)
				_putchar(j / 10 + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}

#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int j;
	int i = 0;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		putchar('\n');
		i++;
	}
}

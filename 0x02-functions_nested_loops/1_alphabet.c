#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Print the alphabet in lower case
 * Return: 0 (means sucesss)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


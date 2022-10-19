#include "main.h"

/**
 * print_sign - Entry point
 * @n: parameter for the number
 * Description: Prints number sign
 * Return: 0 is n is 0, -1 if negative and 1 if positive
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


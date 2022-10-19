#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: Arguments
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num = num * -1;

	-putchar(num + '0');

	return (num);
}


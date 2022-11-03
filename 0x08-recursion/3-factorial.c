#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: parameter number to be factorialized
 * Return: the factorial of the number or -1 if the parameter is less than zero
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}


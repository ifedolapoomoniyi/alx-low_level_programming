#include <stdio.h>

/**
 * main - Print prime factor
 * Return: 0 meas success
 */

int main(void)
{
	long num = 612852475143;
	long i;

	for (i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			num /= i;
			i = 2;
		}
	}
	printf("%lu\n", num);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (success)
 * Description: All possible combination fo single digit numbers
 */
int main(void)
{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

		if (i == '9')
			break;
	}
	putchar('\n');
	return (0);
}


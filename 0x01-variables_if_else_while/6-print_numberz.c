#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (success)
 * Description: print single digit numbers without using char
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + "0");
	}
	putchar('\n');
	return (0);
}


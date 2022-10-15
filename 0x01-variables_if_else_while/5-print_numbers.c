#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: 0 (success)
 * Description: Print all single digit base 10 number
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

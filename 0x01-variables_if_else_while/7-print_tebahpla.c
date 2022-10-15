#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 (success)
 * Description: Printing the alphabet in reverse
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 (success)
 * Description: prints the alphabet in lowercase
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}

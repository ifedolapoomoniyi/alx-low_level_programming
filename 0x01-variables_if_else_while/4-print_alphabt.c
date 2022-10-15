#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: 0 (success)
 * Description: Print the alphabet minus q and e
 */
int main(void)
{
	char ch

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}


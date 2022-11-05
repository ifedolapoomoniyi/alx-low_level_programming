#include <stdio.h>

/**
 * main - prints out the number of arguments passed to the command line
 * @argc: argument count
 * Return: 0 (success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc-1);

	return (0);
}

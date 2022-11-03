#include "main.h"

/**
 * _strlen_recursion - returns the length of a given string
 * @s: string to be checked
 * Return: Equals to the length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

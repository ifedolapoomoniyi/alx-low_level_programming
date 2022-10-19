#include "main.h"

/**
 * _isalpha - Entry point
 * Description: Checks for alphabetic charcter
 * Return: 1 if letter, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and init with a char
 * @size: the size of the array to be init
 * @c: The specific char to initialize the array with
 * Return: 0 if size == 0 or the function fails -Null
 * 		other wise - a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}

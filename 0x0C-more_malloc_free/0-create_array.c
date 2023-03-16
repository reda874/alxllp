#include "main.h"
#include <stdlib.h>

/**
 * *create_array - create array of charsand init with specific char
 *  @c: char
 *  @size: bytes
 *
 *  Return: a pointer  or null
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}

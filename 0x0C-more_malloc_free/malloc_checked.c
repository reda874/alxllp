#include "main.h"

/**
* malloc_checked -  process termination with 98
* @b: allocated memory
* Return: *p to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	exit(98);
	return (i);
}

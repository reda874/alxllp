#include "main.h"
#include <stdlib.h>

/**
* malloc_checked -  process termination with 98
* @b: allocated memory
* Return: *p to allocated memory
*/
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}

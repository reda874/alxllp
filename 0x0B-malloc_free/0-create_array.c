#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size:  array size
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: *p to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{

if (size == 0)
{
return (NULL);
}

char *str = calloc(size, sizeof(char));
if (str == NULL)
{
return (NULL);
}

for (unsigned int i = 0; i < size; i++)
{
str[i] = c;
}

return (str);
}

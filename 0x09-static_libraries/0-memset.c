#include "main.h"
/**
 * _memset - fills block of memory with a value
 * @s: adress
 * @b: value
 * @n: n bytes
 *
 * Return: array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

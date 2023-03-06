#include "main.h"
/**
 * _memset - assign value to memory
 * @s: memory adress
 * @b: value
 * @n: n bytes to be changed
 *
 * Return: new value
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

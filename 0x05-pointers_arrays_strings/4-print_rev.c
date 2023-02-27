#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lgt = 0;
	int e;

	while (*s != '\0')
	{
		lgt++;
		s++;
	}
	s--;
	for (e = lgt; e > 0; e--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

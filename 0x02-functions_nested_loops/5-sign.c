#include "main.h"

/**
 * print_sign - checks if n is +/-/0
 * @n: Character being checked
 * Return: 1 if n is positive/ 0 if n is zero/ -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	else
	{
		_putchar(48);
		return (0);
	}
}

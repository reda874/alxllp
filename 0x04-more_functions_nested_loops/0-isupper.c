#include "main.h"

/**
 * _isupper -uppercase letters
 * @c: The character to check
 *
 * Return: 0 or 1
 */

int_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
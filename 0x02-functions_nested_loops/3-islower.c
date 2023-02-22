#include "main.h"
/**
 * _islower - check if the chaar is lowercase
 *
 * @c: character to test
 * Return: 1 if @c is lower else 0
 */

int _islower(int c)
{


	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

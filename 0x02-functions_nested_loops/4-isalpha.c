#include "main.h"

/**
 * _isalpha - checks if char is part o the alphabet
 *
 * @c: char to be checked
 * Return:1 if @c is a char else 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

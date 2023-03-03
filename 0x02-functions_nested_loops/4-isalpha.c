#include "main.h"
/**
 * _isalpha - Checks for lowercase and uppercase
 * @c: Character that is being checked
 * Return: If c is lowercase and or uppercase, return 1, if not return 0
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

if (c >= 'A' && c <= 'Z')
return (1);

return 0;
}

#include <unistd.h>

/**
 *_putchar - writes char
 *@c: char
 *
 * Return: 1.
 * On error, -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

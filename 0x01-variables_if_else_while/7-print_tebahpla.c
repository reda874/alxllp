#include <stdio.h>

/**
 *main - printing reversed alphabet
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');

	return (0);
}

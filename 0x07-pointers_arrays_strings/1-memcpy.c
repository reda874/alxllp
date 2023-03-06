#include "main.h"
/**
 *_memcpy - function to copy memory area
 *@dest: memory adress for storing
 *@src: memory adress for copying
 *@n: n bytes
 *
 *Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

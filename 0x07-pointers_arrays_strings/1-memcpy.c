#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest:  stored mem
 *@src:  copied mem
 *@n: n bytes
 *
 *Return: copied mem with n bytes change
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

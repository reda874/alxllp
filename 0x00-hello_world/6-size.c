#include <stdio.h>
/**
 * -main - a program printing sizes
 * Return 0 (done
 */
int main(void)
{
	char a;
	int b;
	long int c;
	float f;
printf("size of a char: %lu byte bytes(s)\n", (unsigned long)sizeof(a));
printf("size of an int: %lu byte bytes(s)\n", (unsigned long)sizeof(b));
printf("size of a long: %lu byte bytes(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu byte bytes(s)\n", (unsigned long)sizeof(f));
return (0);

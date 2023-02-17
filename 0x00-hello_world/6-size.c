#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (done)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", sizeof(char));
printf("Size of an int: %lubytes(s)\n", sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", sizeof(long));
printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long));
printf("Size of a float: %lu bytes(s)\n", sizeof(float));
return (0);
}

#include "main.h"
/**
 *swap_int - swaping values of two integers
 *@a:int to swap 1
 *@b:int to swap 2
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

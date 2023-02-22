#include"main.h"
/**
 *_islower - function that checks for lower case chars
 *c - is the char to be checked
*Return: 1 if char is lowercase, esle means 0
*/
int _islower(int c)



	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

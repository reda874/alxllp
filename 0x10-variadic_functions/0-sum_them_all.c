#include "variadic_functions.h"
#include <stdarg.h>


/**
 * sum_them_all - sum of all paramters
 * @n:n paramters
 * @...: A variable number of paramters to calculate the sum
 *
 * Return: If n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

		va_end(ap);

return (sum);
}

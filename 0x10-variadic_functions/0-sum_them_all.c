#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of its parameters.
 * @n: amt of the arguments.
 *
 * Return: sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int h;
	va_list valist;

	va_start(valist, n);

	for (h = 0; h < n; h++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}

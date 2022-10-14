#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed btn numbers.
 * @n: The number of int passed to the func.
 * @...: A var number of number to be printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	va_list valist;
	unsigned int index;

	va_start(valist, n);

	for (index = 0; index < n; index++)
	{
		num = va_arg(valist, int);
		printf("%d", num);

		if (index < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}

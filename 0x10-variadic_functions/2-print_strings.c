#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings.
 * @separator: string to be printed btn the strings.
 * @n: numb of strings passed to the function.
 *
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int h;
	char *str;
		va_start(valist, n);

	for (h = 0; h < n; h++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("nil");

		if (h < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}



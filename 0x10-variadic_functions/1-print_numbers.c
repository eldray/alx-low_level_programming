#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/*
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed btn numbers.
 * @n: The number of int passed to the func.
 * @...: A var number of number to be printed.
 */

void print_numbers(const char *separator, const unsine int n, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}

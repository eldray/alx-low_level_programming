#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the func.
 *
 * Return: no return.
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int h = 0, p, m = 0;
	char *str;
	const char t_arg [ ] = "cifs";
		
	va_start(valist, format);
	while (format && format[h])
	{
		p = 0;
		while (t_arg[p])
		{
			if (format[h] == t_arg[p] && m)
			{
			printf(", ");
			break;
			} p++;
		}
		switch (format[h])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} h++;
	}
	printf("\n"), va_end(valist);
}

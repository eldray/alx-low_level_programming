#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Prints reverse of string
 *
 *  @s: Strings
 */

void print_rev(char *s)
{
		int len = 0, index;

		while (s[index++])

		{
			len++;
		}

		for (index = len - 1; index >= 0; index--)

		{
			_putchar(s[index]);

		}

		_putchar('\n');
}

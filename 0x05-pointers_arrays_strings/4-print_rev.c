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
	int c = 0;

		while (s[c] != '\0')

		{
			c++;
		}

		for (c -= 1; c >= 0; c--)

		{

			_putchar(s[c]);
		}


	_putchar('\n');
}

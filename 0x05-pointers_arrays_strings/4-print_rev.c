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
	int len = strlen(s);

		while (len--)

			putchar(*(s + len));
		putchar(10);

}
}

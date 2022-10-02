#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 *
 * @s: string to print
 *
 *  Return: void
 */

int _puts_recursion(char *s)
{
	if (*s)
	{
	i	_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n')
}
